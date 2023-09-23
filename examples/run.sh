export PYTHONPATH=/home/anderson/Rouxinol

for config in game0_cfggrind_dynamic.yl game1_cfggrind_dynamic.yl game0_cfggrind_static.yl game1_cfggrind_static.yl game0_llvm.yl  game1_llvm.yl; do

	python3 game.py --config $config &> $config.out &

done

