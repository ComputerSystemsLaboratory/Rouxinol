import os
import numpy as np
import tensorflow as tf
import tensorflow.python.util.deprecation as deprecation

# Disable TensorFlow messages and deprecation warnings
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"
deprecation._PRINT_DEPRECATION_WARNINGS = False

tf.compat.v1.disable_eager_execution()

from rouxinol.model.model_nn import Model


class SummaryCallback(tf.keras.callbacks.Callback):
    def __init__(self, summary):
        self.__summary = summary

    def on_epoch_end(self, epoch, logs=None):
        self.__summary["accuracy"] = logs["accuracy"]
        self.__summary["loss"] = logs["loss"]


class TfLSTMModel(Model):
    def __init__(self, config=None, num_types=None):
        if not config:
            config = {
                "lstm_units": 64,
                "dense_units": 32,
                "learning_rate": 0.001,
                "batch_size": 64,
                "num_epochs": 1000,
                "early_stopping": 0,
                "restore_best_weights": 0,
                "patience": 100,
                "maxlen": 1024, # 65 LLVM instructions
                "num_classes": 104,
            }
        super().__init__(config)

        self.__num_types = num_types

        np.random.seed(0)

        self.checkpoint_path = "/tmp/tf.ckpt"

        # lANGUAGe model. Takes as inputs source code sequences
        code_in = tf.keras.layers.Input(shape=(self.config["maxlen"],), dtype="int32", name="code_in")
        x = tf.keras.layers.Embedding(input_dim=self.__num_types + 1, input_length=self.config["maxlen"], output_dim=64, name="embedding")(code_in)
        x = tf.keras.layers.LSTM(self.config["lstm_units"], implementation=1, return_sequences=True, name="lstm_1")(x)
        x = tf.keras.layers.LSTM(self.config["lstm_units"], implementation=1, name="lstm_2")(x)

        x = tf.keras.layers.BatchNormalization()(x)
        x = tf.keras.layers.Dense(self.config["dense_units"], activation="relu")(x)
        out = tf.keras.layers.Dense(self.config["num_classes"], activation="sigmoid")(x)

        self.model = tf.keras.models.Model(
            inputs=code_in, outputs=out
        )
        self.model.compile(
            optimizer="adam",
            metrics=["accuracy"],
            loss=["categorical_crossentropy"],
        )
            
    def __process_data(self, data):
        processed = {"sequences": [], "label": []}
        for item in data:
            processed["sequences"].append(item["x"])
            processed["label"].append(item["y"])

        return processed

    def __process(self, data):
        # Pad sequences
        encoded = np.array(
            tf.keras.preprocessing.sequence.pad_sequences(
                data["sequences"], maxlen=self.config["maxlen"], value=self.__num_types
            )
        )
        seqs = np.vstack([np.expand_dims(x, axis=0) for x in encoded])
        # Encode labels one-hot
        ys = tf.keras.utils.to_categorical(data["label"], num_classes=self.config["num_classes"])

        return seqs, ys

    def _train_with_batch(self, batch):
        seqs, ys = self.__process(self.__process_data(batch))

        summary = {}
        callback = SummaryCallback(summary)

        self.model.fit(
            x=np.array(seqs),
            y=np.array(ys),
            epochs=1,
            batch_size=self.config["batch_size"],
            verbose=False,
            shuffle=True,
            callbacks=[callback],
        )

        return summary["loss"], summary["accuracy"]

    def _predict_with_batch(self, batch):
        seqs, ys = self.__process(self.__process_data(batch))

        pred = self.model.predict(
            x=np.array(seqs), batch_size=999999, verbose=False
        )

        valid_accuracy = np.sum(np.argmax(pred, axis=1) == np.argmax(ys, axis=1)) / len(pred)

        return valid_accuracy, pred

    def _predict_with_data(self, data):
        valid_accuracy, pred = self._predict_with_batch(data)
        return valid_accuracy, pred

    def _backup_best_weights(self, epoch):
        self.model.save_weights(self.checkpoint_path)

    def _restore_best_weights(self):
        self.model.load_weights(self.checkpoint_path)

