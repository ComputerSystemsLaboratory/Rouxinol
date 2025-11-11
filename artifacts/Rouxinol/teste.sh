# STEP 4 - Match
for rep in llvmHistogram x86Histogram cfggrindHybridHistogram cfggrindDynamicHistogram ir2vec performanceCounterHistogram; do

	python match_generator.py \
		-d ~/Downloads/cgo2026/data/A2/O1 \
		-r $rep \
		-o ~/Downloads/cgo2026/data/A2/match_O1/$rep

        python match_generator.py \
                -d ~/Downloads/cgo2026/data/I1/O1 \
                -r $rep \
                -o ~/Downloads/cgo2026/data/I1/match_O1/$rep
	
done
