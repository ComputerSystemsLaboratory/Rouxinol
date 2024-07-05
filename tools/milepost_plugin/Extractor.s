	.text
	.file	"Extractor.cpp"
	.globl	_ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE # -- Begin function _ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE
	.p2align	4, 0x90
	.type	_ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE,@function
_ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE: # @_ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE
.Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception0
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$2576, %rsp             # imm = 0xA10
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdi
	callq	_ZN4llvm6Module5beginEv
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rdi
	callq	_ZN4llvm6Module3endEv
	movq	%rax, -40(%rbp)
.LBB0_1:                                # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_6 Depth 2
                                        #       Child Loop BB0_24 Depth 3
                                        #       Child Loop BB0_42 Depth 3
                                        #       Child Loop BB0_69 Depth 3
                                        #       Child Loop BB0_79 Depth 3
                                        #         Child Loop BB0_134 Depth 4
                                        #         Child Loop BB0_212 Depth 4
                                        #         Child Loop BB0_260 Depth 4
	leaq	-32(%rbp), %rdi
	leaq	-40(%rbp), %rsi
	callq	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_
	testb	$1, %al
	jne	.LBB0_2
	jmp	.LBB0_422
.LBB0_2:                                #   in Loop: Header=BB0_1 Depth=1
	leaq	-32(%rbp), %rdi
	callq	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm5Value7getNameEv
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm11GlobalValue13isDeclarationEv
	andb	$1, %al
	movzbl	%al, %ecx
	cmpl	$0, %ecx
	jne	.LBB0_420
# %bb.3:                                #   in Loop: Header=BB0_1 Depth=1
	movl	$0, -68(%rbp)
	movl	$0, -72(%rbp)
	movl	$0, -76(%rbp)
	movl	$0, -80(%rbp)
	movl	$0, -84(%rbp)
	movl	$0, -88(%rbp)
	movl	$0, -92(%rbp)
	movl	$0, -96(%rbp)
	movl	$0, -100(%rbp)
	movl	$0, -104(%rbp)
	movl	$0, -108(%rbp)
	movl	$0, -112(%rbp)
	movl	$0, -116(%rbp)
	movl	$0, -120(%rbp)
	movl	$0, -124(%rbp)
	movl	$0, -128(%rbp)
	movl	$0, -132(%rbp)
	movl	$0, -136(%rbp)
	movl	$0, -140(%rbp)
	movl	$0, -144(%rbp)
	movl	$0, -148(%rbp)
	movl	$0, -152(%rbp)
	movl	$0, -156(%rbp)
	movl	$0, -160(%rbp)
	movl	$0, -164(%rbp)
	movl	$0, -168(%rbp)
	movl	$0, -172(%rbp)
	movl	$0, -176(%rbp)
	movl	$0, -180(%rbp)
	movl	$0, -184(%rbp)
	movl	$0, -188(%rbp)
	movl	$0, -192(%rbp)
	movl	$0, -196(%rbp)
	movl	$0, -200(%rbp)
	movl	$0, -204(%rbp)
	movl	$0, -208(%rbp)
	movl	$0, -212(%rbp)
	movl	$0, -216(%rbp)
	movl	$0, -220(%rbp)
	movl	$0, -224(%rbp)
	movl	$0, -228(%rbp)
	movl	$0, -232(%rbp)
	movl	$0, -236(%rbp)
	movl	$0, -240(%rbp)
	movl	$0, -248(%rbp)
	movl	$0, -252(%rbp)
	movl	$0, -256(%rbp)
	movl	$0, -260(%rbp)
	movl	$0, -264(%rbp)
	movl	$0, -268(%rbp)
	movl	$0, -272(%rbp)
	movl	$0, -276(%rbp)
	movl	$0, -280(%rbp)
	movl	$0, -284(%rbp)
	movl	$0, -288(%rbp)
	movl	$0, -292(%rbp)
	movl	$0, -296(%rbp)
	movl	$0, -300(%rbp)
	leaq	-352(%rbp), %rdi
	callq	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev
	leaq	-400(%rbp), %rdi
	callq	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev
	movq	-48(%rbp), %rax
	movq	%rax, -408(%rbp)
	movq	-408(%rbp), %rdi
.Ltmp0:
	callq	_ZN4llvm8Function5beginEv
.Ltmp1:
	movq	%rax, -1016(%rbp)       # 8-byte Spill
	jmp	.LBB0_4
.LBB0_4:                                #   in Loop: Header=BB0_1 Depth=1
	movq	-1016(%rbp), %rax       # 8-byte Reload
	movq	%rax, -416(%rbp)
	movq	-408(%rbp), %rdi
.Ltmp2:
	callq	_ZN4llvm8Function3endEv
.Ltmp3:
	movq	%rax, -1024(%rbp)       # 8-byte Spill
	jmp	.LBB0_5
.LBB0_5:                                #   in Loop: Header=BB0_1 Depth=1
	movq	-1024(%rbp), %rax       # 8-byte Reload
	movq	%rax, -440(%rbp)
.LBB0_6:                                #   Parent Loop BB0_1 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB0_24 Depth 3
                                        #       Child Loop BB0_42 Depth 3
                                        #       Child Loop BB0_69 Depth 3
                                        #       Child Loop BB0_79 Depth 3
                                        #         Child Loop BB0_134 Depth 4
                                        #         Child Loop BB0_212 Depth 4
                                        #         Child Loop BB0_260 Depth 4
.Ltmp4:
	leaq	-416(%rbp), %rdi
	leaq	-440(%rbp), %rsi
	callq	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_
.Ltmp5:
	movb	%al, -1025(%rbp)        # 1-byte Spill
	jmp	.LBB0_7
.LBB0_7:                                #   in Loop: Header=BB0_6 Depth=2
	movb	-1025(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_8
	jmp	.LBB0_297
.LBB0_8:                                #   in Loop: Header=BB0_6 Depth=2
.Ltmp238:
	leaq	-416(%rbp), %rdi
	callq	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv
.Ltmp239:
	movq	%rax, -1040(%rbp)       # 8-byte Spill
	jmp	.LBB0_9
.LBB0_9:                                #   in Loop: Header=BB0_6 Depth=2
	movq	-1040(%rbp), %rax       # 8-byte Reload
	movq	%rax, -448(%rbp)
	movq	-448(%rbp), %rdi
.Ltmp240:
	callq	_ZN4llvm10BasicBlock13getTerminatorEv
.Ltmp241:
	movq	%rax, -1048(%rbp)       # 8-byte Spill
	jmp	.LBB0_10
.LBB0_10:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1048(%rbp), %rax       # 8-byte Reload
	movq	%rax, -456(%rbp)
	movq	-456(%rbp), %rdi
.Ltmp242:
	callq	_ZNK4llvm11Instruction16getNumSuccessorsEv
.Ltmp243:
	movl	%eax, -1052(%rbp)       # 4-byte Spill
	jmp	.LBB0_11
.LBB0_11:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-1052(%rbp), %eax       # 4-byte Reload
	movl	%eax, -460(%rbp)
	cmpl	$1, -460(%rbp)
	jne	.LBB0_14
# %bb.12:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-84(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -84(%rbp)
	jmp	.LBB0_20
.LBB0_13:
.Ltmp426:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -424(%rbp)
	movl	%edx, -428(%rbp)
	leaq	-400(%rbp), %rdi
	callq	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev
	leaq	-352(%rbp), %rdi
	callq	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev
	jmp	.LBB0_423
.LBB0_14:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -460(%rbp)
	jne	.LBB0_16
# %bb.15:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-88(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -88(%rbp)
	jmp	.LBB0_19
.LBB0_16:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -460(%rbp)
	jbe	.LBB0_18
# %bb.17:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-92(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -92(%rbp)
.LBB0_18:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_19
.LBB0_19:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_20
.LBB0_20:                               #   in Loop: Header=BB0_6 Depth=2
	movl	$0, -464(%rbp)
	movq	-448(%rbp), %rdi
.Ltmp244:
	callq	_ZN4llvm12predecessorsEPNS_10BasicBlockE
.Ltmp245:
	movq	%rdx, -1064(%rbp)       # 8-byte Spill
	movq	%rax, -1072(%rbp)       # 8-byte Spill
	jmp	.LBB0_21
.LBB0_21:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1072(%rbp), %rax       # 8-byte Reload
	movq	%rax, -488(%rbp)
	movq	-1064(%rbp), %rcx       # 8-byte Reload
	movq	%rcx, -480(%rbp)
	leaq	-488(%rbp), %rdx
	movq	%rdx, -472(%rbp)
	movq	-472(%rbp), %rdi
.Ltmp246:
	callq	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv
.Ltmp247:
	movq	%rax, -1080(%rbp)       # 8-byte Spill
	jmp	.LBB0_22
.LBB0_22:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1080(%rbp), %rax       # 8-byte Reload
	movq	%rax, -496(%rbp)
	movq	-472(%rbp), %rdi
.Ltmp248:
	callq	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv
.Ltmp249:
	movq	%rax, -1088(%rbp)       # 8-byte Spill
	jmp	.LBB0_23
.LBB0_23:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1088(%rbp), %rax       # 8-byte Reload
	movq	%rax, -504(%rbp)
.LBB0_24:                               #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
.Ltmp250:
	leaq	-496(%rbp), %rdi
	leaq	-504(%rbp), %rsi
	callq	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_
.Ltmp251:
	movb	%al, -1089(%rbp)        # 1-byte Spill
	jmp	.LBB0_25
.LBB0_25:                               #   in Loop: Header=BB0_24 Depth=3
	movb	-1089(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_26
	jmp	.LBB0_30
.LBB0_26:                               #   in Loop: Header=BB0_24 Depth=3
.Ltmp422:
	leaq	-496(%rbp), %rdi
	callq	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv
.Ltmp423:
	movq	%rax, -1104(%rbp)       # 8-byte Spill
	jmp	.LBB0_27
.LBB0_27:                               #   in Loop: Header=BB0_24 Depth=3
	movq	-1104(%rbp), %rax       # 8-byte Reload
	movq	%rax, -512(%rbp)
	movl	-464(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -464(%rbp)
# %bb.28:                               #   in Loop: Header=BB0_24 Depth=3
.Ltmp424:
	leaq	-496(%rbp), %rdi
	callq	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv
.Ltmp425:
	jmp	.LBB0_29
.LBB0_29:                               #   in Loop: Header=BB0_24 Depth=3
	jmp	.LBB0_24
.LBB0_30:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$1, -464(%rbp)
	jne	.LBB0_32
# %bb.31:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-72(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -72(%rbp)
	jmp	.LBB0_38
.LBB0_32:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -464(%rbp)
	jne	.LBB0_34
# %bb.33:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-76(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -76(%rbp)
	jmp	.LBB0_37
.LBB0_34:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -464(%rbp)
	jbe	.LBB0_36
# %bb.35:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-80(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -80(%rbp)
.LBB0_36:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_37
.LBB0_37:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_38
.LBB0_38:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-448(%rbp), %rsi
.Ltmp252:
	leaq	-552(%rbp), %rdi
	callq	_ZN4llvm10successorsEPNS_10BasicBlockE
.Ltmp253:
	jmp	.LBB0_39
.LBB0_39:                               #   in Loop: Header=BB0_6 Depth=2
	leaq	-552(%rbp), %rax
	movq	%rax, -520(%rbp)
	movq	-520(%rbp), %rdi
.Ltmp254:
	callq	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv
.Ltmp255:
	movl	%edx, -1108(%rbp)       # 4-byte Spill
	movq	%rax, -1120(%rbp)       # 8-byte Spill
	jmp	.LBB0_40
.LBB0_40:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1120(%rbp), %rax       # 8-byte Reload
	movq	%rax, -568(%rbp)
	movl	-1108(%rbp), %ecx       # 4-byte Reload
	movl	%ecx, -560(%rbp)
	movq	-520(%rbp), %rdi
.Ltmp256:
	callq	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv
.Ltmp257:
	movl	%edx, -1124(%rbp)       # 4-byte Spill
	movq	%rax, -1136(%rbp)       # 8-byte Spill
	jmp	.LBB0_41
.LBB0_41:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1136(%rbp), %rax       # 8-byte Reload
	movq	%rax, -584(%rbp)
	movl	-1124(%rbp), %ecx       # 4-byte Reload
	movl	%ecx, -576(%rbp)
.LBB0_42:                               #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
.Ltmp258:
	leaq	-568(%rbp), %rdi
	leaq	-584(%rbp), %rsi
	callq	_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_
.Ltmp259:
	movb	%al, -1137(%rbp)        # 1-byte Spill
	jmp	.LBB0_43
.LBB0_43:                               #   in Loop: Header=BB0_42 Depth=3
	movb	-1137(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_44
	jmp	.LBB0_48
.LBB0_44:                               #   in Loop: Header=BB0_42 Depth=3
.Ltmp418:
	leaq	-568(%rbp), %rdi
	callq	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv
.Ltmp419:
	movq	%rax, -1152(%rbp)       # 8-byte Spill
	jmp	.LBB0_45
.LBB0_45:                               #   in Loop: Header=BB0_42 Depth=3
	movq	-1152(%rbp), %rax       # 8-byte Reload
	movq	%rax, -592(%rbp)
	movl	-280(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -280(%rbp)
# %bb.46:                               #   in Loop: Header=BB0_42 Depth=3
.Ltmp420:
	leaq	-568(%rbp), %rdi
	callq	_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv
.Ltmp421:
	jmp	.LBB0_47
.LBB0_47:                               #   in Loop: Header=BB0_42 Depth=3
	jmp	.LBB0_42
.LBB0_48:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$1, -464(%rbp)
	jne	.LBB0_51
# %bb.49:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$1, -460(%rbp)
	jne	.LBB0_51
# %bb.50:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-96(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -96(%rbp)
	jmp	.LBB0_67
.LBB0_51:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$1, -464(%rbp)
	jne	.LBB0_54
# %bb.52:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -460(%rbp)
	jne	.LBB0_54
# %bb.53:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-100(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -100(%rbp)
	jmp	.LBB0_66
.LBB0_54:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -464(%rbp)
	jne	.LBB0_57
# %bb.55:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$1, -460(%rbp)
	jne	.LBB0_57
# %bb.56:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-104(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -104(%rbp)
	jmp	.LBB0_65
.LBB0_57:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -464(%rbp)
	jne	.LBB0_60
# %bb.58:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -460(%rbp)
	jne	.LBB0_60
# %bb.59:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-108(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -108(%rbp)
	jmp	.LBB0_64
.LBB0_60:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -464(%rbp)
	jbe	.LBB0_63
# %bb.61:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$2, -460(%rbp)
	jbe	.LBB0_63
# %bb.62:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-112(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -112(%rbp)
.LBB0_63:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_64
.LBB0_64:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_65
.LBB0_65:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_66
.LBB0_66:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_67
.LBB0_67:                               #   in Loop: Header=BB0_6 Depth=2
	cmpl	$0, -460(%rbp)
	je	.LBB0_76
# %bb.68:                               #   in Loop: Header=BB0_6 Depth=2
	movl	$0, -596(%rbp)
.LBB0_69:                               #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	movl	-596(%rbp), %eax
	cmpl	-460(%rbp), %eax
	jae	.LBB0_75
# %bb.70:                               #   in Loop: Header=BB0_69 Depth=3
	movq	-456(%rbp), %rdi
	movl	-596(%rbp), %esi
.Ltmp416:
	xorl	%edx, %edx
	callq	_ZN4llvm14isCriticalEdgeEPKNS_11InstructionEjb
.Ltmp417:
	movb	%al, -1153(%rbp)        # 1-byte Spill
	jmp	.LBB0_71
.LBB0_71:                               #   in Loop: Header=BB0_69 Depth=3
	movb	-1153(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_72
	jmp	.LBB0_73
.LBB0_72:                               #   in Loop: Header=BB0_69 Depth=3
	movl	-272(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -272(%rbp)
.LBB0_73:                               #   in Loop: Header=BB0_69 Depth=3
	jmp	.LBB0_74
.LBB0_74:                               #   in Loop: Header=BB0_69 Depth=3
	movl	-596(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -596(%rbp)
	jmp	.LBB0_69
.LBB0_75:                               #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_76
.LBB0_76:                               #   in Loop: Header=BB0_6 Depth=2
	movl	-68(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -68(%rbp)
	movl	$0, -600(%rbp)
	movl	$0, -604(%rbp)
	movq	-448(%rbp), %rcx
	movq	%rcx, -616(%rbp)
	movq	-616(%rbp), %rdi
.Ltmp260:
	callq	_ZN4llvm10BasicBlock5beginEv
.Ltmp261:
	movq	%rax, -1168(%rbp)       # 8-byte Spill
	jmp	.LBB0_77
.LBB0_77:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1168(%rbp), %rax       # 8-byte Reload
	movq	%rax, -624(%rbp)
	movq	-616(%rbp), %rdi
.Ltmp262:
	callq	_ZN4llvm10BasicBlock3endEv
.Ltmp263:
	movq	%rax, -1176(%rbp)       # 8-byte Spill
	jmp	.LBB0_78
.LBB0_78:                               #   in Loop: Header=BB0_6 Depth=2
	movq	-1176(%rbp), %rax       # 8-byte Reload
	movq	%rax, -632(%rbp)
.LBB0_79:                               #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        # =>    This Loop Header: Depth=3
                                        #         Child Loop BB0_134 Depth 4
                                        #         Child Loop BB0_212 Depth 4
                                        #         Child Loop BB0_260 Depth 4
.Ltmp264:
	leaq	-624(%rbp), %rdi
	leaq	-632(%rbp), %rsi
	callq	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_
.Ltmp265:
	movb	%al, -1177(%rbp)        # 1-byte Spill
	jmp	.LBB0_80
.LBB0_80:                               #   in Loop: Header=BB0_79 Depth=3
	movb	-1177(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_81
	jmp	.LBB0_270
.LBB0_81:                               #   in Loop: Header=BB0_79 Depth=3
.Ltmp270:
	leaq	-624(%rbp), %rdi
	callq	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv
.Ltmp271:
	movq	%rax, -1192(%rbp)       # 8-byte Spill
	jmp	.LBB0_82
.LBB0_82:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-1192(%rbp), %rax       # 8-byte Reload
	movq	%rax, -640(%rbp)
	movq	-640(%rbp), %rdi
.Ltmp272:
	callq	_ZNK4llvm4User14getNumOperandsEv
.Ltmp273:
	movl	%eax, -1196(%rbp)       # 4-byte Spill
	jmp	.LBB0_83
.LBB0_83:                               #   in Loop: Header=BB0_79 Depth=3
	movl	-1196(%rbp), %eax       # 4-byte Reload
	movl	%eax, -644(%rbp)
	movl	$0, -648(%rbp)
	movq	-640(%rbp), %rdi
.Ltmp274:
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp275:
	movq	%rax, -1208(%rbp)       # 8-byte Spill
	jmp	.LBB0_84
.LBB0_84:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-1208(%rbp), %rax       # 8-byte Reload
	movq	%rax, -656(%rbp)
	movq	-640(%rbp), %rdi
.Ltmp276:
	callq	_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp277:
	movq	%rax, -1216(%rbp)       # 8-byte Spill
	jmp	.LBB0_85
.LBB0_85:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-1216(%rbp), %rax       # 8-byte Reload
	movq	%rax, -664(%rbp)
	cmpq	$0, -664(%rbp)
	je	.LBB0_100
# %bb.86:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp308:
	xorl	%esi, %esi
	callq	_ZNK4llvm4User10getOperandEj
.Ltmp309:
	movq	%rax, -1224(%rbp)       # 8-byte Spill
	jmp	.LBB0_87
.LBB0_87:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-1224(%rbp), %rax       # 8-byte Reload
	movq	%rax, -672(%rbp)
	movq	-672(%rbp), %rdi
.Ltmp310:
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp311:
	movq	%rax, -1232(%rbp)       # 8-byte Spill
	jmp	.LBB0_88
.LBB0_88:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-1232(%rbp), %rax       # 8-byte Reload
	movq	%rax, -680(%rbp)
	movq	-680(%rbp), %rdi
.Ltmp312:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp313:
	movb	%al, -1233(%rbp)        # 1-byte Spill
	jmp	.LBB0_89
.LBB0_89:                               #   in Loop: Header=BB0_79 Depth=3
	movb	-1233(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_90
	jmp	.LBB0_91
.LBB0_90:                               #   in Loop: Header=BB0_79 Depth=3
	movl	-284(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -284(%rbp)
.LBB0_91:                               #   in Loop: Header=BB0_79 Depth=3
.Ltmp314:
	leaq	-672(%rbp), %rdi
	callq	_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
.Ltmp315:
	movb	%al, -1234(%rbp)        # 1-byte Spill
	jmp	.LBB0_92
.LBB0_92:                               #   in Loop: Header=BB0_79 Depth=3
	movb	-1234(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_93
	jmp	.LBB0_94
.LBB0_93:                               #   in Loop: Header=BB0_79 Depth=3
	movl	-288(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -288(%rbp)
.LBB0_94:                               #   in Loop: Header=BB0_79 Depth=3
	movq	-680(%rbp), %rdi
.Ltmp316:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp317:
	movb	%al, -1235(%rbp)        # 1-byte Spill
	jmp	.LBB0_95
.LBB0_95:                               #   in Loop: Header=BB0_79 Depth=3
	movb	-1235(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_96
	jmp	.LBB0_99
.LBB0_96:                               #   in Loop: Header=BB0_79 Depth=3
.Ltmp318:
	leaq	-672(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_
.Ltmp319:
	movb	%al, -1236(%rbp)        # 1-byte Spill
	jmp	.LBB0_97
.LBB0_97:                               #   in Loop: Header=BB0_79 Depth=3
	movb	-1236(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_98
	jmp	.LBB0_99
.LBB0_98:                               #   in Loop: Header=BB0_79 Depth=3
	movl	-268(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -268(%rbp)
.LBB0_99:                               #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_155
.LBB0_100:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp278:
	callq	_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp279:
	movq	%rax, -1248(%rbp)       # 8-byte Spill
	jmp	.LBB0_101
.LBB0_101:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1248(%rbp), %rax       # 8-byte Reload
	movq	%rax, -688(%rbp)
	cmpq	$0, -688(%rbp)
	je	.LBB0_110
# %bb.102:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-688(%rbp), %rdi
.Ltmp304:
	callq	_ZNK4llvm10BranchInst13isConditionalEv
.Ltmp305:
	movb	%al, -1249(%rbp)        # 1-byte Spill
	jmp	.LBB0_103
.LBB0_103:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1249(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_104
	jmp	.LBB0_105
.LBB0_104:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-192(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -192(%rbp)
	jmp	.LBB0_109
.LBB0_105:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-688(%rbp), %rdi
.Ltmp306:
	callq	_ZNK4llvm10BranchInst15isUnconditionalEv
.Ltmp307:
	movb	%al, -1250(%rbp)        # 1-byte Spill
	jmp	.LBB0_106
.LBB0_106:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1250(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_107
	jmp	.LBB0_108
.LBB0_107:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-196(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -196(%rbp)
.LBB0_108:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_109
.LBB0_109:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_154
.LBB0_110:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp280:
	callq	_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp281:
	movq	%rax, -1264(%rbp)       # 8-byte Spill
	jmp	.LBB0_111
.LBB0_111:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1264(%rbp), %rax       # 8-byte Reload
	movq	%rax, -696(%rbp)
	cmpq	$0, -696(%rbp)
	je	.LBB0_113
# %bb.112:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-132(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -132(%rbp)
	jmp	.LBB0_153
.LBB0_113:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp282:
	callq	_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp283:
	movq	%rax, -1272(%rbp)       # 8-byte Spill
	jmp	.LBB0_114
.LBB0_114:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1272(%rbp), %rax       # 8-byte Reload
	movq	%rax, -704(%rbp)
	cmpq	$0, -704(%rbp)
	je	.LBB0_148
# %bb.115:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-704(%rbp), %rdi
.Ltmp286:
	callq	_ZNK4llvm8CallBase17getCalledFunctionEv
.Ltmp287:
	movq	%rax, -1280(%rbp)       # 8-byte Spill
	jmp	.LBB0_116
.LBB0_116:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1280(%rbp), %rax       # 8-byte Reload
	movq	%rax, -712(%rbp)
	movq	-704(%rbp), %rdi
.Ltmp288:
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp289:
	movq	%rax, -1288(%rbp)       # 8-byte Spill
	jmp	.LBB0_117
.LBB0_117:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1288(%rbp), %rax       # 8-byte Reload
	movq	%rax, -720(%rbp)
	movq	-720(%rbp), %rdi
.Ltmp290:
	callq	_ZNK4llvm4Type11isIntegerTyEv
.Ltmp291:
	movb	%al, -1289(%rbp)        # 1-byte Spill
	jmp	.LBB0_118
.LBB0_118:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1289(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_119
	jmp	.LBB0_120
.LBB0_119:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-176(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -176(%rbp)
	jmp	.LBB0_124
.LBB0_120:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-720(%rbp), %rdi
.Ltmp292:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp293:
	movb	%al, -1290(%rbp)        # 1-byte Spill
	jmp	.LBB0_121
.LBB0_121:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1290(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_122
	jmp	.LBB0_123
.LBB0_122:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-168(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -168(%rbp)
.LBB0_123:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_124
.LBB0_124:                              #   in Loop: Header=BB0_79 Depth=3
	cmpq	$0, -712(%rbp)
	jne	.LBB0_130
# %bb.125:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-704(%rbp), %rdi
.Ltmp294:
	callq	_ZNK4llvm8CallBase14isIndirectCallEv
.Ltmp295:
	movb	%al, -1291(%rbp)        # 1-byte Spill
	jmp	.LBB0_126
.LBB0_126:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1291(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_127
	jmp	.LBB0_128
.LBB0_127:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-188(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -188(%rbp)
	jmp	.LBB0_129
.LBB0_128:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-180(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -180(%rbp)
.LBB0_129:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_131
.LBB0_130:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-180(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -180(%rbp)
.LBB0_131:                              #   in Loop: Header=BB0_79 Depth=3
	movl	$0, -724(%rbp)
	cmpq	$0, -712(%rbp)
	je	.LBB0_143
# %bb.132:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-704(%rbp), %rdi
.Ltmp296:
	callq	_ZNK4llvm8CallBase17getNumArgOperandsEv
.Ltmp297:
	movl	%eax, -1296(%rbp)       # 4-byte Spill
	jmp	.LBB0_133
.LBB0_133:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-1296(%rbp), %eax       # 4-byte Reload
	movl	%eax, -728(%rbp)
	movl	$0, -732(%rbp)
.LBB0_134:                              #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_79 Depth=3
                                        # =>      This Inner Loop Header: Depth=4
	movl	-732(%rbp), %eax
	cmpl	-728(%rbp), %eax
	jae	.LBB0_142
# %bb.135:                              #   in Loop: Header=BB0_134 Depth=4
	movq	-704(%rbp), %rdi
	movl	-732(%rbp), %esi
.Ltmp298:
	callq	_ZNK4llvm8CallBase13getArgOperandEj
.Ltmp299:
	movq	%rax, -1304(%rbp)       # 8-byte Spill
	jmp	.LBB0_136
.LBB0_136:                              #   in Loop: Header=BB0_134 Depth=4
.Ltmp300:
	movq	-1304(%rbp), %rdi       # 8-byte Reload
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp301:
	movq	%rax, -1312(%rbp)       # 8-byte Spill
	jmp	.LBB0_137
.LBB0_137:                              #   in Loop: Header=BB0_134 Depth=4
	movq	-1312(%rbp), %rax       # 8-byte Reload
	movq	%rax, -744(%rbp)
	movq	-744(%rbp), %rdi
.Ltmp302:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp303:
	movb	%al, -1313(%rbp)        # 1-byte Spill
	jmp	.LBB0_138
.LBB0_138:                              #   in Loop: Header=BB0_134 Depth=4
	movb	-1313(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_139
	jmp	.LBB0_140
.LBB0_139:                              #   in Loop: Header=BB0_134 Depth=4
	movl	-648(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -648(%rbp)
.LBB0_140:                              #   in Loop: Header=BB0_134 Depth=4
	movl	-724(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -724(%rbp)
# %bb.141:                              #   in Loop: Header=BB0_134 Depth=4
	movl	-732(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -732(%rbp)
	jmp	.LBB0_134
.LBB0_142:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_143
.LBB0_143:                              #   in Loop: Header=BB0_79 Depth=3
	cmpl	$0, -648(%rbp)
	je	.LBB0_145
# %bb.144:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-184(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -184(%rbp)
.LBB0_145:                              #   in Loop: Header=BB0_79 Depth=3
	cmpl	$4, -724(%rbp)
	jbe	.LBB0_147
# %bb.146:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-172(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -172(%rbp)
.LBB0_147:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_152
.LBB0_148:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp284:
	callq	_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp285:
	movq	%rax, -1328(%rbp)       # 8-byte Spill
	jmp	.LBB0_149
.LBB0_149:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1328(%rbp), %rax       # 8-byte Reload
	movq	%rax, -752(%rbp)
	cmpq	$0, -752(%rbp)
	je	.LBB0_151
# %bb.150:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-276(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -276(%rbp)
.LBB0_151:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_152
.LBB0_152:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_153
.LBB0_153:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_154
.LBB0_154:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_155
.LBB0_155:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp320:
	callq	_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp321:
	movq	%rax, -1336(%rbp)       # 8-byte Spill
	jmp	.LBB0_156
.LBB0_156:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1336(%rbp), %rax       # 8-byte Reload
	movq	%rax, -760(%rbp)
	cmpq	$0, -760(%rbp)
	je	.LBB0_158
# %bb.157:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-136(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -136(%rbp)
	jmp	.LBB0_190
.LBB0_158:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp322:
	callq	_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp323:
	movq	%rax, -1344(%rbp)       # 8-byte Spill
	jmp	.LBB0_159
.LBB0_159:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1344(%rbp), %rax       # 8-byte Reload
	movq	%rax, -768(%rbp)
	cmpq	$0, -768(%rbp)
	je	.LBB0_189
# %bb.160:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-768(%rbp), %rdi
.Ltmp324:
	xorl	%esi, %esi
	callq	_ZNK4llvm14BinaryOperator10getOperandEj
.Ltmp325:
	movq	%rax, -1352(%rbp)       # 8-byte Spill
	jmp	.LBB0_161
.LBB0_161:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1352(%rbp), %rax       # 8-byte Reload
	movq	%rax, -776(%rbp)
	movq	-768(%rbp), %rdi
.Ltmp326:
	movl	$1, %esi
	callq	_ZNK4llvm14BinaryOperator10getOperandEj
.Ltmp327:
	movq	%rax, -1360(%rbp)       # 8-byte Spill
	jmp	.LBB0_162
.LBB0_162:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1360(%rbp), %rax       # 8-byte Reload
	movq	%rax, -784(%rbp)
	movq	-768(%rbp), %rdi
.Ltmp328:
	xorl	%esi, %esi
	callq	_ZNK4llvm14BinaryOperator10getOperandEj
.Ltmp329:
	movq	%rax, -1368(%rbp)       # 8-byte Spill
	jmp	.LBB0_163
.LBB0_163:                              #   in Loop: Header=BB0_79 Depth=3
.Ltmp330:
	movq	-1368(%rbp), %rdi       # 8-byte Reload
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp331:
	movq	%rax, -1376(%rbp)       # 8-byte Spill
	jmp	.LBB0_164
.LBB0_164:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1376(%rbp), %rax       # 8-byte Reload
	movq	%rax, -792(%rbp)
	movq	-768(%rbp), %rdi
.Ltmp332:
	movl	$1, %esi
	callq	_ZNK4llvm14BinaryOperator10getOperandEj
.Ltmp333:
	movq	%rax, -1384(%rbp)       # 8-byte Spill
	jmp	.LBB0_165
.LBB0_165:                              #   in Loop: Header=BB0_79 Depth=3
.Ltmp334:
	movq	-1384(%rbp), %rdi       # 8-byte Reload
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp335:
	movq	%rax, -1392(%rbp)       # 8-byte Spill
	jmp	.LBB0_166
.LBB0_166:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1392(%rbp), %rax       # 8-byte Reload
	movq	%rax, -800(%rbp)
	movq	-792(%rbp), %rdi
.Ltmp336:
	callq	_ZNK4llvm4Type11isIntegerTyEv
.Ltmp337:
	movb	%al, -1393(%rbp)        # 1-byte Spill
	jmp	.LBB0_167
.LBB0_167:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1393(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_168
	jmp	.LBB0_171
.LBB0_168:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-800(%rbp), %rdi
.Ltmp338:
	callq	_ZNK4llvm4Type11isIntegerTyEv
.Ltmp339:
	movb	%al, -1394(%rbp)        # 1-byte Spill
	jmp	.LBB0_169
.LBB0_169:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1394(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_170
	jmp	.LBB0_171
.LBB0_170:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-120(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -120(%rbp)
	jmp	.LBB0_183
.LBB0_171:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-792(%rbp), %rdi
.Ltmp340:
	callq	_ZNK4llvm4Type17isFloatingPointTyEv
.Ltmp341:
	movb	%al, -1395(%rbp)        # 1-byte Spill
	jmp	.LBB0_172
.LBB0_172:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1395(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_173
	jmp	.LBB0_176
.LBB0_173:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-800(%rbp), %rdi
.Ltmp342:
	callq	_ZNK4llvm4Type17isFloatingPointTyEv
.Ltmp343:
	movb	%al, -1396(%rbp)        # 1-byte Spill
	jmp	.LBB0_174
.LBB0_174:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1396(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_175
	jmp	.LBB0_176
.LBB0_175:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-124(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -124(%rbp)
	jmp	.LBB0_182
.LBB0_176:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-792(%rbp), %rdi
.Ltmp344:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp345:
	movb	%al, -1397(%rbp)        # 1-byte Spill
	jmp	.LBB0_177
.LBB0_177:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1397(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_180
	jmp	.LBB0_178
.LBB0_178:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-800(%rbp), %rdi
.Ltmp346:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp347:
	movb	%al, -1398(%rbp)        # 1-byte Spill
	jmp	.LBB0_179
.LBB0_179:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1398(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_180
	jmp	.LBB0_181
.LBB0_180:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-140(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -140(%rbp)
.LBB0_181:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_182
.LBB0_182:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_183
.LBB0_183:                              #   in Loop: Header=BB0_79 Depth=3
.Ltmp348:
	leaq	-776(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
.Ltmp349:
	movb	%al, -1399(%rbp)        # 1-byte Spill
	jmp	.LBB0_184
.LBB0_184:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1399(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_187
	jmp	.LBB0_185
.LBB0_185:                              #   in Loop: Header=BB0_79 Depth=3
.Ltmp350:
	leaq	-784(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
.Ltmp351:
	movb	%al, -1400(%rbp)        # 1-byte Spill
	jmp	.LBB0_186
.LBB0_186:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1400(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_187
	jmp	.LBB0_188
.LBB0_187:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-144(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -144(%rbp)
.LBB0_188:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_189
.LBB0_189:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_190
.LBB0_190:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rax
	movq	%rax, -808(%rbp)
.Ltmp352:
	leaq	-808(%rbp), %rdi
	callq	_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_
.Ltmp353:
	movb	%al, -1401(%rbp)        # 1-byte Spill
	jmp	.LBB0_191
.LBB0_191:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1401(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_192
	jmp	.LBB0_194
.LBB0_192:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp354:
	callq	_ZNK4llvm4User14getNumOperandsEv
.Ltmp355:
	movl	%eax, -1408(%rbp)       # 4-byte Spill
	jmp	.LBB0_193
.LBB0_193:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-1408(%rbp), %eax       # 4-byte Reload
	movl	%eax, -812(%rbp)
	movl	-812(%rbp), %ecx
	addl	-604(%rbp), %ecx
	movl	%ecx, -604(%rbp)
	movl	-812(%rbp), %ecx
	addl	-296(%rbp), %ecx
	movl	%ecx, -296(%rbp)
	movl	-600(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -600(%rbp)
	movl	-300(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -300(%rbp)
.LBB0_194:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-656(%rbp), %rdi
.Ltmp356:
	callq	_ZNK4llvm4Type8isVoidTyEv
.Ltmp357:
	movb	%al, -1409(%rbp)        # 1-byte Spill
	jmp	.LBB0_195
.LBB0_195:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1409(%rbp), %al        # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %ecx
	cmpl	$0, %ecx
	jne	.LBB0_206
# %bb.196:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-116(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -116(%rbp)
	cmpl	$2, -644(%rbp)
	jne	.LBB0_202
# %bb.197:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp358:
	xorl	%esi, %esi
	callq	_ZNK4llvm4User10getOperandEj
.Ltmp359:
	movq	%rax, -1424(%rbp)       # 8-byte Spill
	jmp	.LBB0_198
.LBB0_198:                              #   in Loop: Header=BB0_79 Depth=3
.Ltmp360:
	movq	-1424(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp361:
	movq	%rax, -1432(%rbp)       # 8-byte Spill
	jmp	.LBB0_199
.LBB0_199:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1432(%rbp), %rax       # 8-byte Reload
	movq	%rax, -824(%rbp)
	cmpq	$0, -824(%rbp)
	je	.LBB0_201
# %bb.200:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-148(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -148(%rbp)
.LBB0_201:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_202
.LBB0_202:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-656(%rbp), %rdi
.Ltmp362:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp363:
	movb	%al, -1433(%rbp)        # 1-byte Spill
	jmp	.LBB0_203
.LBB0_203:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1433(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_204
	jmp	.LBB0_205
.LBB0_204:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-248(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -248(%rbp)
.LBB0_205:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_206
.LBB0_206:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rax
	movq	%rax, -832(%rbp)
.Ltmp364:
	leaq	-832(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_
.Ltmp365:
	movb	%al, -1434(%rbp)        # 1-byte Spill
	jmp	.LBB0_207
.LBB0_207:                              #   in Loop: Header=BB0_79 Depth=3
	movb	-1434(%rbp), %al        # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %ecx
	cmpl	$0, %ecx
	jne	.LBB0_255
# %bb.208:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp366:
	callq	_ZN4llvm4User8operandsEv
.Ltmp367:
	movq	%rdx, -1448(%rbp)       # 8-byte Spill
	movq	%rax, -1456(%rbp)       # 8-byte Spill
	jmp	.LBB0_209
.LBB0_209:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1456(%rbp), %rax       # 8-byte Reload
	movq	%rax, -856(%rbp)
	movq	-1448(%rbp), %rcx       # 8-byte Reload
	movq	%rcx, -848(%rbp)
	leaq	-856(%rbp), %rdx
	movq	%rdx, -840(%rbp)
	movq	-840(%rbp), %rdi
.Ltmp368:
	callq	_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv
.Ltmp369:
	movq	%rax, -1464(%rbp)       # 8-byte Spill
	jmp	.LBB0_210
.LBB0_210:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1464(%rbp), %rax       # 8-byte Reload
	movq	%rax, -864(%rbp)
	movq	-840(%rbp), %rdi
.Ltmp370:
	callq	_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv
.Ltmp371:
	movq	%rax, -1472(%rbp)       # 8-byte Spill
	jmp	.LBB0_211
.LBB0_211:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1472(%rbp), %rax       # 8-byte Reload
	movq	%rax, -872(%rbp)
.LBB0_212:                              #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_79 Depth=3
                                        # =>      This Inner Loop Header: Depth=4
	movq	-864(%rbp), %rax
	cmpq	-872(%rbp), %rax
	je	.LBB0_254
# %bb.213:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-864(%rbp), %rax
	movq	%rax, -880(%rbp)
	movq	-880(%rbp), %rdi
.Ltmp382:
	callq	_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_
.Ltmp383:
	movb	%al, -1473(%rbp)        # 1-byte Spill
	jmp	.LBB0_214
.LBB0_214:                              #   in Loop: Header=BB0_212 Depth=4
	movb	-1473(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_215
	jmp	.LBB0_218
.LBB0_215:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-880(%rbp), %rdi
.Ltmp384:
	callq	_ZNK4llvm3UsecvPNS_5ValueEEv
.Ltmp385:
	movq	%rax, -1488(%rbp)       # 8-byte Spill
	jmp	.LBB0_216
.LBB0_216:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1488(%rbp), %rax       # 8-byte Reload
	movq	%rax, -888(%rbp)
.Ltmp386:
	leaq	-352(%rbp), %rdi
	leaq	-888(%rbp), %rsi
	callq	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_
.Ltmp387:
	movb	%dl, -1489(%rbp)        # 1-byte Spill
	movq	%rax, -1504(%rbp)       # 8-byte Spill
	jmp	.LBB0_217
.LBB0_217:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1504(%rbp), %rax       # 8-byte Reload
	movq	%rax, -904(%rbp)
	movb	-1489(%rbp), %cl        # 1-byte Reload
	movb	%cl, -896(%rbp)
	movl	-252(%rbp), %edx
	addl	$1, %edx
	movl	%edx, -252(%rbp)
.LBB0_218:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-880(%rbp), %rdi
.Ltmp388:
	callq	_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
.Ltmp389:
	movq	%rax, -1512(%rbp)       # 8-byte Spill
	jmp	.LBB0_219
.LBB0_219:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1512(%rbp), %rax       # 8-byte Reload
	movq	%rax, -912(%rbp)
	cmpq	$0, -912(%rbp)
	je	.LBB0_240
# %bb.220:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-912(%rbp), %rdi
.Ltmp390:
	callq	_ZNK4llvm11ConstantInt7getTypeEv
.Ltmp391:
	movq	%rax, -1520(%rbp)       # 8-byte Spill
	jmp	.LBB0_221
.LBB0_221:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1520(%rbp), %rax       # 8-byte Reload
	movq	%rax, -920(%rbp)
	movq	-920(%rbp), %rdi
.Ltmp392:
	movl	$32, %esi
	callq	_ZNK4llvm4Type11isIntegerTyEj
.Ltmp393:
	movb	%al, -1521(%rbp)        # 1-byte Spill
	jmp	.LBB0_222
.LBB0_222:                              #   in Loop: Header=BB0_212 Depth=4
	movb	-1521(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_223
	jmp	.LBB0_224
.LBB0_223:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-232(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -232(%rbp)
	jmp	.LBB0_228
.LBB0_224:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-920(%rbp), %rdi
.Ltmp394:
	movl	$64, %esi
	callq	_ZNK4llvm4Type11isIntegerTyEj
.Ltmp395:
	movb	%al, -1522(%rbp)        # 1-byte Spill
	jmp	.LBB0_225
.LBB0_225:                              #   in Loop: Header=BB0_212 Depth=4
	movb	-1522(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_226
	jmp	.LBB0_227
.LBB0_226:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-240(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -240(%rbp)
.LBB0_227:                              #   in Loop: Header=BB0_212 Depth=4
	jmp	.LBB0_228
.LBB0_228:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-912(%rbp), %rdi
.Ltmp396:
	callq	_ZNK4llvm11ConstantInt12getSExtValueEv
.Ltmp397:
	movq	%rax, -1536(%rbp)       # 8-byte Spill
	jmp	.LBB0_229
.LBB0_229:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1536(%rbp), %rax       # 8-byte Reload
	cmpq	$0, %rax
	jne	.LBB0_233
# %bb.230:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-920(%rbp), %rdi
.Ltmp398:
	callq	_ZNK4llvm4Type11isIntegerTyEv
.Ltmp399:
	movb	%al, -1537(%rbp)        # 1-byte Spill
	jmp	.LBB0_231
.LBB0_231:                              #   in Loop: Header=BB0_212 Depth=4
	movb	-1537(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_232
	jmp	.LBB0_233
.LBB0_232:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-228(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -228(%rbp)
	jmp	.LBB0_239
.LBB0_233:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-912(%rbp), %rdi
.Ltmp400:
	callq	_ZNK4llvm11ConstantInt12getSExtValueEv
.Ltmp401:
	movq	%rax, -1552(%rbp)       # 8-byte Spill
	jmp	.LBB0_234
.LBB0_234:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1552(%rbp), %rax       # 8-byte Reload
	cmpq	$1, %rax
	jne	.LBB0_238
# %bb.235:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-920(%rbp), %rdi
.Ltmp402:
	callq	_ZNK4llvm4Type11isIntegerTyEv
.Ltmp403:
	movb	%al, -1553(%rbp)        # 1-byte Spill
	jmp	.LBB0_236
.LBB0_236:                              #   in Loop: Header=BB0_212 Depth=4
	movb	-1553(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_237
	jmp	.LBB0_238
.LBB0_237:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-236(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -236(%rbp)
.LBB0_238:                              #   in Loop: Header=BB0_212 Depth=4
	jmp	.LBB0_239
.LBB0_239:                              #   in Loop: Header=BB0_212 Depth=4
	jmp	.LBB0_240
.LBB0_240:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-880(%rbp), %rdi
.Ltmp404:
	callq	_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
.Ltmp405:
	movq	%rax, -1568(%rbp)       # 8-byte Spill
	jmp	.LBB0_241
.LBB0_241:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1568(%rbp), %rax       # 8-byte Reload
	movq	%rax, -928(%rbp)
	cmpq	$0, -928(%rbp)
	je	.LBB0_252
# %bb.242:                              #   in Loop: Header=BB0_212 Depth=4
.Ltmp406:
	leaq	-400(%rbp), %rdi
	leaq	-928(%rbp), %rsi
	callq	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_
.Ltmp407:
	movb	%dl, -1569(%rbp)        # 1-byte Spill
	movq	%rax, -1584(%rbp)       # 8-byte Spill
	jmp	.LBB0_243
.LBB0_243:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1584(%rbp), %rax       # 8-byte Reload
	movq	%rax, -944(%rbp)
	movb	-1569(%rbp), %cl        # 1-byte Reload
	movb	%cl, -936(%rbp)
	movq	-928(%rbp), %rdi
.Ltmp408:
	callq	_ZNK4llvm14GlobalVariable14getNumOperandsEv
.Ltmp409:
	movl	%eax, -1588(%rbp)       # 4-byte Spill
	jmp	.LBB0_244
.LBB0_244:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-1588(%rbp), %eax       # 4-byte Reload
	cmpl	$0, %eax
	je	.LBB0_251
# %bb.245:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-928(%rbp), %rdi
.Ltmp410:
	xorl	%esi, %esi
	callq	_ZNK4llvm14GlobalVariable10getOperandEj
.Ltmp411:
	movq	%rax, -1600(%rbp)       # 8-byte Spill
	jmp	.LBB0_246
.LBB0_246:                              #   in Loop: Header=BB0_212 Depth=4
.Ltmp412:
	movq	-1600(%rbp), %rdi       # 8-byte Reload
	callq	_ZNK4llvm5Value7getTypeEv
.Ltmp413:
	movq	%rax, -1608(%rbp)       # 8-byte Spill
	jmp	.LBB0_247
.LBB0_247:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-1608(%rbp), %rax       # 8-byte Reload
	movq	%rax, -952(%rbp)
	movq	-952(%rbp), %rdi
.Ltmp414:
	callq	_ZNK4llvm4Type11isPointerTyEv
.Ltmp415:
	movb	%al, -1609(%rbp)        # 1-byte Spill
	jmp	.LBB0_248
.LBB0_248:                              #   in Loop: Header=BB0_212 Depth=4
	movb	-1609(%rbp), %al        # 1-byte Reload
	testb	$1, %al
	jne	.LBB0_249
	jmp	.LBB0_250
.LBB0_249:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-264(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -264(%rbp)
.LBB0_250:                              #   in Loop: Header=BB0_212 Depth=4
	jmp	.LBB0_251
.LBB0_251:                              #   in Loop: Header=BB0_212 Depth=4
	movl	-256(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -256(%rbp)
.LBB0_252:                              #   in Loop: Header=BB0_212 Depth=4
	jmp	.LBB0_253
.LBB0_253:                              #   in Loop: Header=BB0_212 Depth=4
	movq	-864(%rbp), %rax
	addq	$24, %rax
	movq	%rax, -864(%rbp)
	jmp	.LBB0_212
.LBB0_254:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_255
.LBB0_255:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-640(%rbp), %rdi
.Ltmp372:
	callq	_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.Ltmp373:
	movq	%rax, -1624(%rbp)       # 8-byte Spill
	jmp	.LBB0_256
.LBB0_256:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1624(%rbp), %rax       # 8-byte Reload
	movq	%rax, -960(%rbp)
	cmpq	$0, -960(%rbp)
	je	.LBB0_267
# %bb.257:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-960(%rbp), %rdi
.Ltmp374:
	callq	_ZN4llvm11GEPOperator9idx_beginEv
.Ltmp375:
	movq	%rax, -1632(%rbp)       # 8-byte Spill
	jmp	.LBB0_258
.LBB0_258:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1632(%rbp), %rax       # 8-byte Reload
	movq	%rax, -968(%rbp)
	movq	-960(%rbp), %rdi
.Ltmp376:
	callq	_ZN4llvm11GEPOperator7idx_endEv
.Ltmp377:
	movq	%rax, -1640(%rbp)       # 8-byte Spill
	jmp	.LBB0_259
.LBB0_259:                              #   in Loop: Header=BB0_79 Depth=3
	movq	-1640(%rbp), %rax       # 8-byte Reload
	movq	%rax, -976(%rbp)
.LBB0_260:                              #   Parent Loop BB0_1 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_79 Depth=3
                                        # =>      This Inner Loop Header: Depth=4
	movq	-968(%rbp), %rax
	cmpq	-976(%rbp), %rax
	je	.LBB0_266
# %bb.261:                              #   in Loop: Header=BB0_260 Depth=4
	movq	-968(%rbp), %rdi
.Ltmp380:
	callq	_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
.Ltmp381:
	movq	%rax, -1648(%rbp)       # 8-byte Spill
	jmp	.LBB0_262
.LBB0_262:                              #   in Loop: Header=BB0_260 Depth=4
	movq	-1648(%rbp), %rax       # 8-byte Reload
	movq	%rax, -984(%rbp)
	cmpq	$0, -984(%rbp)
	je	.LBB0_264
# %bb.263:                              #   in Loop: Header=BB0_260 Depth=4
	jmp	.LBB0_264
.LBB0_264:                              #   in Loop: Header=BB0_260 Depth=4
	jmp	.LBB0_265
.LBB0_265:                              #   in Loop: Header=BB0_260 Depth=4
	movq	-968(%rbp), %rax
	addq	$24, %rax
	movq	%rax, -968(%rbp)
	jmp	.LBB0_260
.LBB0_266:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_267
.LBB0_267:                              #   in Loop: Header=BB0_79 Depth=3
	movl	-128(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -128(%rbp)
# %bb.268:                              #   in Loop: Header=BB0_79 Depth=3
.Ltmp378:
	leaq	-624(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv
.Ltmp379:
	jmp	.LBB0_269
.LBB0_269:                              #   in Loop: Header=BB0_79 Depth=3
	jmp	.LBB0_79
.LBB0_270:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$3, -600(%rbp)
	jbe	.LBB0_272
# %bb.271:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-216(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -216(%rbp)
	jmp	.LBB0_276
.LBB0_272:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$0, -600(%rbp)
	jb	.LBB0_275
# %bb.273:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$3, -600(%rbp)
	ja	.LBB0_275
# %bb.274:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-212(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -212(%rbp)
.LBB0_275:                              #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_276
.LBB0_276:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$5, -604(%rbp)
	jbe	.LBB0_278
# %bb.277:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-220(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -220(%rbp)
	jmp	.LBB0_282
.LBB0_278:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$0, -604(%rbp)
	jbe	.LBB0_281
# %bb.279:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$6, -604(%rbp)
	jae	.LBB0_281
# %bb.280:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-224(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -224(%rbp)
.LBB0_281:                              #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_282
.LBB0_282:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$0, -600(%rbp)
	je	.LBB0_284
# %bb.283:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-292(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -292(%rbp)
.LBB0_284:                              #   in Loop: Header=BB0_6 Depth=2
	movq	-448(%rbp), %rdi
.Ltmp266:
	callq	_ZNK4llvm10BasicBlock4sizeEv
.Ltmp267:
	movq	%rax, -1656(%rbp)       # 8-byte Spill
	jmp	.LBB0_285
.LBB0_285:                              #   in Loop: Header=BB0_6 Depth=2
	movq	-1656(%rbp), %rax       # 8-byte Reload
	movl	%eax, %ecx
	movl	%ecx, -988(%rbp)
	cmpl	$15, -988(%rbp)
	jae	.LBB0_287
# %bb.286:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-156(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -156(%rbp)
	jmp	.LBB0_294
.LBB0_287:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$15, -988(%rbp)
	jb	.LBB0_290
# %bb.288:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$500, -988(%rbp)        # imm = 0x1F4
	ja	.LBB0_290
# %bb.289:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-160(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -160(%rbp)
	jmp	.LBB0_293
.LBB0_290:                              #   in Loop: Header=BB0_6 Depth=2
	cmpl	$500, -988(%rbp)        # imm = 0x1F4
	jbe	.LBB0_292
# %bb.291:                              #   in Loop: Header=BB0_6 Depth=2
	movl	-164(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -164(%rbp)
.LBB0_292:                              #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_293
.LBB0_293:                              #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_294
.LBB0_294:                              #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_295
.LBB0_295:                              #   in Loop: Header=BB0_6 Depth=2
.Ltmp268:
	leaq	-416(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv
.Ltmp269:
	jmp	.LBB0_296
.LBB0_296:                              #   in Loop: Header=BB0_6 Depth=2
	jmp	.LBB0_6
.LBB0_297:                              #   in Loop: Header=BB0_1 Depth=1
	cmpl	$0, -296(%rbp)
	jne	.LBB0_299
# %bb.298:                              #   in Loop: Header=BB0_1 Depth=1
	xorps	%xmm0, %xmm0
	movss	%xmm0, -204(%rbp)
	jmp	.LBB0_300
.LBB0_299:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-296(%rbp), %eax
	movl	%eax, %ecx
	cvtsi2ss	%rcx, %xmm0
	movl	-300(%rbp), %eax
	movl	%eax, %ecx
	cvtsi2ss	%rcx, %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -204(%rbp)
.LBB0_300:                              #   in Loop: Header=BB0_1 Depth=1
	cmpl	$0, -68(%rbp)
	jne	.LBB0_302
# %bb.301:                              #   in Loop: Header=BB0_1 Depth=1
	xorps	%xmm0, %xmm0
	movss	%xmm0, -152(%rbp)
	movss	%xmm0, -200(%rbp)
	jmp	.LBB0_303
.LBB0_302:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-300(%rbp), %eax
	movl	%eax, %ecx
	cvtsi2ss	%rcx, %xmm0
	movl	-68(%rbp), %eax
	movl	%eax, %ecx
	cvtsi2ss	%rcx, %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -200(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, %ecx
	cvtsi2ss	%rcx, %xmm0
	movl	-68(%rbp), %eax
	movl	%eax, %ecx
	cvtsi2ss	%rcx, %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -152(%rbp)
.LBB0_303:                              #   in Loop: Header=BB0_1 Depth=1
	leaq	-352(%rbp), %rdi
	callq	_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv
                                        # kill: def $eax killed $eax killed $rax
	movl	%eax, -244(%rbp)
	leaq	-400(%rbp), %rdi
	callq	_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv
                                        # kill: def $eax killed $eax killed $rax
	movl	%eax, -260(%rbp)
	movl	-68(%rbp), %eax
	movl	-292(%rbp), %ecx
	subl	%ecx, %eax
	movl	%eax, -208(%rbp)
.Ltmp6:
	callq	_ZN4llvm4errsEv
.Ltmp7:
	movq	%rax, -1664(%rbp)       # 8-byte Spill
	jmp	.LBB0_304
.LBB0_304:                              #   in Loop: Header=BB0_1 Depth=1
	movups	-64(%rbp), %xmm0
	movaps	%xmm0, -1008(%rbp)
	movq	-1008(%rbp), %rsi
	movq	-1000(%rbp), %rdx
.Ltmp8:
	movq	-1664(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsENS_9StringRefE
.Ltmp9:
	movq	%rax, -1672(%rbp)       # 8-byte Spill
	jmp	.LBB0_305
.LBB0_305:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp10:
	movl	$.L.str, %esi
	movq	-1672(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp11:
	movq	%rax, -1680(%rbp)       # 8-byte Spill
	jmp	.LBB0_306
.LBB0_306:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp12:
	movl	$.L.str.1, %esi
	movq	-1680(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp13:
	movq	%rax, -1688(%rbp)       # 8-byte Spill
	jmp	.LBB0_307
.LBB0_307:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-68(%rbp), %esi
.Ltmp14:
	movq	-1688(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp15:
	movq	%rax, -1696(%rbp)       # 8-byte Spill
	jmp	.LBB0_308
.LBB0_308:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp16:
	movl	$.L.str.2, %esi
	movq	-1696(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp17:
	movq	%rax, -1704(%rbp)       # 8-byte Spill
	jmp	.LBB0_309
.LBB0_309:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-84(%rbp), %esi
.Ltmp18:
	movq	-1704(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp19:
	movq	%rax, -1712(%rbp)       # 8-byte Spill
	jmp	.LBB0_310
.LBB0_310:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp20:
	movl	$.L.str.3, %esi
	movq	-1712(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp21:
	movq	%rax, -1720(%rbp)       # 8-byte Spill
	jmp	.LBB0_311
.LBB0_311:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-88(%rbp), %esi
.Ltmp22:
	movq	-1720(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp23:
	movq	%rax, -1728(%rbp)       # 8-byte Spill
	jmp	.LBB0_312
.LBB0_312:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp24:
	movl	$.L.str.4, %esi
	movq	-1728(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp25:
	movq	%rax, -1736(%rbp)       # 8-byte Spill
	jmp	.LBB0_313
.LBB0_313:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-92(%rbp), %esi
.Ltmp26:
	movq	-1736(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp27:
	movq	%rax, -1744(%rbp)       # 8-byte Spill
	jmp	.LBB0_314
.LBB0_314:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp28:
	movl	$.L.str.5, %esi
	movq	-1744(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp29:
	movq	%rax, -1752(%rbp)       # 8-byte Spill
	jmp	.LBB0_315
.LBB0_315:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-72(%rbp), %esi
.Ltmp30:
	movq	-1752(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp31:
	movq	%rax, -1760(%rbp)       # 8-byte Spill
	jmp	.LBB0_316
.LBB0_316:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp32:
	movl	$.L.str.6, %esi
	movq	-1760(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp33:
	movq	%rax, -1768(%rbp)       # 8-byte Spill
	jmp	.LBB0_317
.LBB0_317:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-76(%rbp), %esi
.Ltmp34:
	movq	-1768(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp35:
	movq	%rax, -1776(%rbp)       # 8-byte Spill
	jmp	.LBB0_318
.LBB0_318:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp36:
	movl	$.L.str.7, %esi
	movq	-1776(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp37:
	movq	%rax, -1784(%rbp)       # 8-byte Spill
	jmp	.LBB0_319
.LBB0_319:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-80(%rbp), %esi
.Ltmp38:
	movq	-1784(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp39:
	movq	%rax, -1792(%rbp)       # 8-byte Spill
	jmp	.LBB0_320
.LBB0_320:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp40:
	movl	$.L.str.8, %esi
	movq	-1792(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp41:
	movq	%rax, -1800(%rbp)       # 8-byte Spill
	jmp	.LBB0_321
.LBB0_321:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-96(%rbp), %esi
.Ltmp42:
	movq	-1800(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp43:
	movq	%rax, -1808(%rbp)       # 8-byte Spill
	jmp	.LBB0_322
.LBB0_322:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp44:
	movl	$.L.str.9, %esi
	movq	-1808(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp45:
	movq	%rax, -1816(%rbp)       # 8-byte Spill
	jmp	.LBB0_323
.LBB0_323:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-100(%rbp), %esi
.Ltmp46:
	movq	-1816(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp47:
	movq	%rax, -1824(%rbp)       # 8-byte Spill
	jmp	.LBB0_324
.LBB0_324:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp48:
	movl	$.L.str.10, %esi
	movq	-1824(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp49:
	movq	%rax, -1832(%rbp)       # 8-byte Spill
	jmp	.LBB0_325
.LBB0_325:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-104(%rbp), %esi
.Ltmp50:
	movq	-1832(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp51:
	movq	%rax, -1840(%rbp)       # 8-byte Spill
	jmp	.LBB0_326
.LBB0_326:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp52:
	movl	$.L.str.11, %esi
	movq	-1840(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp53:
	movq	%rax, -1848(%rbp)       # 8-byte Spill
	jmp	.LBB0_327
.LBB0_327:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-108(%rbp), %esi
.Ltmp54:
	movq	-1848(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp55:
	movq	%rax, -1856(%rbp)       # 8-byte Spill
	jmp	.LBB0_328
.LBB0_328:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp56:
	movl	$.L.str.12, %esi
	movq	-1856(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp57:
	movq	%rax, -1864(%rbp)       # 8-byte Spill
	jmp	.LBB0_329
.LBB0_329:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-112(%rbp), %esi
.Ltmp58:
	movq	-1864(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp59:
	movq	%rax, -1872(%rbp)       # 8-byte Spill
	jmp	.LBB0_330
.LBB0_330:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp60:
	movl	$.L.str.13, %esi
	movq	-1872(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp61:
	movq	%rax, -1880(%rbp)       # 8-byte Spill
	jmp	.LBB0_331
.LBB0_331:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-156(%rbp), %esi
.Ltmp62:
	movq	-1880(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp63:
	movq	%rax, -1888(%rbp)       # 8-byte Spill
	jmp	.LBB0_332
.LBB0_332:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp64:
	movl	$.L.str.14, %esi
	movq	-1888(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp65:
	movq	%rax, -1896(%rbp)       # 8-byte Spill
	jmp	.LBB0_333
.LBB0_333:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-160(%rbp), %esi
.Ltmp66:
	movq	-1896(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp67:
	movq	%rax, -1904(%rbp)       # 8-byte Spill
	jmp	.LBB0_334
.LBB0_334:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp68:
	movl	$.L.str.15, %esi
	movq	-1904(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp69:
	movq	%rax, -1912(%rbp)       # 8-byte Spill
	jmp	.LBB0_335
.LBB0_335:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-164(%rbp), %esi
.Ltmp70:
	movq	-1912(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp71:
	movq	%rax, -1920(%rbp)       # 8-byte Spill
	jmp	.LBB0_336
.LBB0_336:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp72:
	movl	$.L.str.16, %esi
	movq	-1920(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp73:
	movq	%rax, -1928(%rbp)       # 8-byte Spill
	jmp	.LBB0_337
.LBB0_337:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-280(%rbp), %esi
.Ltmp74:
	movq	-1928(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp75:
	movq	%rax, -1936(%rbp)       # 8-byte Spill
	jmp	.LBB0_338
.LBB0_338:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp76:
	movl	$.L.str.17, %esi
	movq	-1936(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp77:
	movq	%rax, -1944(%rbp)       # 8-byte Spill
	jmp	.LBB0_339
.LBB0_339:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-272(%rbp), %esi
.Ltmp78:
	movq	-1944(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp79:
	movq	%rax, -1952(%rbp)       # 8-byte Spill
	jmp	.LBB0_340
.LBB0_340:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp80:
	movl	$.L.str.18, %esi
	movq	-1952(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp81:
	movq	%rax, -1960(%rbp)       # 8-byte Spill
	jmp	.LBB0_341
.LBB0_341:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-276(%rbp), %esi
.Ltmp82:
	movq	-1960(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp83:
	movq	%rax, -1968(%rbp)       # 8-byte Spill
	jmp	.LBB0_342
.LBB0_342:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp84:
	movl	$.L.str.19, %esi
	movq	-1968(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp85:
	movq	%rax, -1976(%rbp)       # 8-byte Spill
	jmp	.LBB0_343
.LBB0_343:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-180(%rbp), %esi
.Ltmp86:
	movq	-1976(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp87:
	movq	%rax, -1984(%rbp)       # 8-byte Spill
	jmp	.LBB0_344
.LBB0_344:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp88:
	movl	$.L.str.20, %esi
	movq	-1984(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp89:
	movq	%rax, -1992(%rbp)       # 8-byte Spill
	jmp	.LBB0_345
.LBB0_345:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-192(%rbp), %esi
.Ltmp90:
	movq	-1992(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp91:
	movq	%rax, -2000(%rbp)       # 8-byte Spill
	jmp	.LBB0_346
.LBB0_346:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp92:
	movl	$.L.str.21, %esi
	movq	-2000(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp93:
	movq	%rax, -2008(%rbp)       # 8-byte Spill
	jmp	.LBB0_347
.LBB0_347:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-116(%rbp), %esi
.Ltmp94:
	movq	-2008(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp95:
	movq	%rax, -2016(%rbp)       # 8-byte Spill
	jmp	.LBB0_348
.LBB0_348:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp96:
	movl	$.L.str.22, %esi
	movq	-2016(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp97:
	movq	%rax, -2024(%rbp)       # 8-byte Spill
	jmp	.LBB0_349
.LBB0_349:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-196(%rbp), %esi
.Ltmp98:
	movq	-2024(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp99:
	movq	%rax, -2032(%rbp)       # 8-byte Spill
	jmp	.LBB0_350
.LBB0_350:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp100:
	movl	$.L.str.23, %esi
	movq	-2032(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp101:
	movq	%rax, -2040(%rbp)       # 8-byte Spill
	jmp	.LBB0_351
.LBB0_351:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-120(%rbp), %esi
.Ltmp102:
	movq	-2040(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp103:
	movq	%rax, -2048(%rbp)       # 8-byte Spill
	jmp	.LBB0_352
.LBB0_352:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp104:
	movl	$.L.str.24, %esi
	movq	-2048(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp105:
	movq	%rax, -2056(%rbp)       # 8-byte Spill
	jmp	.LBB0_353
.LBB0_353:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-124(%rbp), %esi
.Ltmp106:
	movq	-2056(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp107:
	movq	%rax, -2064(%rbp)       # 8-byte Spill
	jmp	.LBB0_354
.LBB0_354:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp108:
	movl	$.L.str.25, %esi
	movq	-2064(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp109:
	movq	%rax, -2072(%rbp)       # 8-byte Spill
	jmp	.LBB0_355
.LBB0_355:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-128(%rbp), %esi
.Ltmp110:
	movq	-2072(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp111:
	movq	%rax, -2080(%rbp)       # 8-byte Spill
	jmp	.LBB0_356
.LBB0_356:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp112:
	movl	$.L.str.26, %esi
	movq	-2080(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp113:
	movq	%rax, -2088(%rbp)       # 8-byte Spill
	jmp	.LBB0_357
.LBB0_357:                              #   in Loop: Header=BB0_1 Depth=1
	movss	-152(%rbp), %xmm0       # xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
.Ltmp114:
	movq	-2088(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEd
.Ltmp115:
	movq	%rax, -2096(%rbp)       # 8-byte Spill
	jmp	.LBB0_358
.LBB0_358:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp116:
	movl	$.L.str.27, %esi
	movq	-2096(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp117:
	movq	%rax, -2104(%rbp)       # 8-byte Spill
	jmp	.LBB0_359
.LBB0_359:                              #   in Loop: Header=BB0_1 Depth=1
	movss	-200(%rbp), %xmm0       # xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
.Ltmp118:
	movq	-2104(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEd
.Ltmp119:
	movq	%rax, -2112(%rbp)       # 8-byte Spill
	jmp	.LBB0_360
.LBB0_360:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp120:
	movl	$.L.str.28, %esi
	movq	-2112(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp121:
	movq	%rax, -2120(%rbp)       # 8-byte Spill
	jmp	.LBB0_361
.LBB0_361:                              #   in Loop: Header=BB0_1 Depth=1
	movss	-204(%rbp), %xmm0       # xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
.Ltmp122:
	movq	-2120(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEd
.Ltmp123:
	movq	%rax, -2128(%rbp)       # 8-byte Spill
	jmp	.LBB0_362
.LBB0_362:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp124:
	movl	$.L.str.29, %esi
	movq	-2128(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp125:
	movq	%rax, -2136(%rbp)       # 8-byte Spill
	jmp	.LBB0_363
.LBB0_363:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-208(%rbp), %esi
.Ltmp126:
	movq	-2136(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp127:
	movq	%rax, -2144(%rbp)       # 8-byte Spill
	jmp	.LBB0_364
.LBB0_364:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp128:
	movl	$.L.str.30, %esi
	movq	-2144(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp129:
	movq	%rax, -2152(%rbp)       # 8-byte Spill
	jmp	.LBB0_365
.LBB0_365:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-212(%rbp), %esi
.Ltmp130:
	movq	-2152(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp131:
	movq	%rax, -2160(%rbp)       # 8-byte Spill
	jmp	.LBB0_366
.LBB0_366:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp132:
	movl	$.L.str.31, %esi
	movq	-2160(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp133:
	movq	%rax, -2168(%rbp)       # 8-byte Spill
	jmp	.LBB0_367
.LBB0_367:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-216(%rbp), %esi
.Ltmp134:
	movq	-2168(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp135:
	movq	%rax, -2176(%rbp)       # 8-byte Spill
	jmp	.LBB0_368
.LBB0_368:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp136:
	movl	$.L.str.32, %esi
	movq	-2176(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp137:
	movq	%rax, -2184(%rbp)       # 8-byte Spill
	jmp	.LBB0_369
.LBB0_369:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-220(%rbp), %esi
.Ltmp138:
	movq	-2184(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp139:
	movq	%rax, -2192(%rbp)       # 8-byte Spill
	jmp	.LBB0_370
.LBB0_370:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp140:
	movl	$.L.str.33, %esi
	movq	-2192(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp141:
	movq	%rax, -2200(%rbp)       # 8-byte Spill
	jmp	.LBB0_371
.LBB0_371:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-224(%rbp), %esi
.Ltmp142:
	movq	-2200(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp143:
	movq	%rax, -2208(%rbp)       # 8-byte Spill
	jmp	.LBB0_372
.LBB0_372:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp144:
	movl	$.L.str.34, %esi
	movq	-2208(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp145:
	movq	%rax, -2216(%rbp)       # 8-byte Spill
	jmp	.LBB0_373
.LBB0_373:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-132(%rbp), %esi
.Ltmp146:
	movq	-2216(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp147:
	movq	%rax, -2224(%rbp)       # 8-byte Spill
	jmp	.LBB0_374
.LBB0_374:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp148:
	movl	$.L.str.35, %esi
	movq	-2224(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp149:
	movq	%rax, -2232(%rbp)       # 8-byte Spill
	jmp	.LBB0_375
.LBB0_375:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-136(%rbp), %esi
.Ltmp150:
	movq	-2232(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp151:
	movq	%rax, -2240(%rbp)       # 8-byte Spill
	jmp	.LBB0_376
.LBB0_376:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp152:
	movl	$.L.str.36, %esi
	movq	-2240(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp153:
	movq	%rax, -2248(%rbp)       # 8-byte Spill
	jmp	.LBB0_377
.LBB0_377:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-140(%rbp), %esi
.Ltmp154:
	movq	-2248(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp155:
	movq	%rax, -2256(%rbp)       # 8-byte Spill
	jmp	.LBB0_378
.LBB0_378:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp156:
	movl	$.L.str.37, %esi
	movq	-2256(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp157:
	movq	%rax, -2264(%rbp)       # 8-byte Spill
	jmp	.LBB0_379
.LBB0_379:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-284(%rbp), %esi
.Ltmp158:
	movq	-2264(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp159:
	movq	%rax, -2272(%rbp)       # 8-byte Spill
	jmp	.LBB0_380
.LBB0_380:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp160:
	movl	$.L.str.38, %esi
	movq	-2272(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp161:
	movq	%rax, -2280(%rbp)       # 8-byte Spill
	jmp	.LBB0_381
.LBB0_381:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-268(%rbp), %esi
.Ltmp162:
	movq	-2280(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp163:
	movq	%rax, -2288(%rbp)       # 8-byte Spill
	jmp	.LBB0_382
.LBB0_382:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp164:
	movl	$.L.str.39, %esi
	movq	-2288(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp165:
	movq	%rax, -2296(%rbp)       # 8-byte Spill
	jmp	.LBB0_383
.LBB0_383:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-288(%rbp), %esi
.Ltmp166:
	movq	-2296(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp167:
	movq	%rax, -2304(%rbp)       # 8-byte Spill
	jmp	.LBB0_384
.LBB0_384:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp168:
	movl	$.L.str.40, %esi
	movq	-2304(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp169:
	movq	%rax, -2312(%rbp)       # 8-byte Spill
	jmp	.LBB0_385
.LBB0_385:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-188(%rbp), %esi
.Ltmp170:
	movq	-2312(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp171:
	movq	%rax, -2320(%rbp)       # 8-byte Spill
	jmp	.LBB0_386
.LBB0_386:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp172:
	movl	$.L.str.41, %esi
	movq	-2320(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp173:
	movq	%rax, -2328(%rbp)       # 8-byte Spill
	jmp	.LBB0_387
.LBB0_387:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-148(%rbp), %esi
.Ltmp174:
	movq	-2328(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp175:
	movq	%rax, -2336(%rbp)       # 8-byte Spill
	jmp	.LBB0_388
.LBB0_388:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp176:
	movl	$.L.str.42, %esi
	movq	-2336(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp177:
	movq	%rax, -2344(%rbp)       # 8-byte Spill
	jmp	.LBB0_389
.LBB0_389:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-144(%rbp), %esi
.Ltmp178:
	movq	-2344(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp179:
	movq	%rax, -2352(%rbp)       # 8-byte Spill
	jmp	.LBB0_390
.LBB0_390:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp180:
	movl	$.L.str.43, %esi
	movq	-2352(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp181:
	movq	%rax, -2360(%rbp)       # 8-byte Spill
	jmp	.LBB0_391
.LBB0_391:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-184(%rbp), %esi
.Ltmp182:
	movq	-2360(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp183:
	movq	%rax, -2368(%rbp)       # 8-byte Spill
	jmp	.LBB0_392
.LBB0_392:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp184:
	movl	$.L.str.44, %esi
	movq	-2368(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp185:
	movq	%rax, -2376(%rbp)       # 8-byte Spill
	jmp	.LBB0_393
.LBB0_393:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-172(%rbp), %esi
.Ltmp186:
	movq	-2376(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp187:
	movq	%rax, -2384(%rbp)       # 8-byte Spill
	jmp	.LBB0_394
.LBB0_394:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp188:
	movl	$.L.str.45, %esi
	movq	-2384(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp189:
	movq	%rax, -2392(%rbp)       # 8-byte Spill
	jmp	.LBB0_395
.LBB0_395:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-168(%rbp), %esi
.Ltmp190:
	movq	-2392(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp191:
	movq	%rax, -2400(%rbp)       # 8-byte Spill
	jmp	.LBB0_396
.LBB0_396:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp192:
	movl	$.L.str.46, %esi
	movq	-2400(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp193:
	movq	%rax, -2408(%rbp)       # 8-byte Spill
	jmp	.LBB0_397
.LBB0_397:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-176(%rbp), %esi
.Ltmp194:
	movq	-2408(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp195:
	movq	%rax, -2416(%rbp)       # 8-byte Spill
	jmp	.LBB0_398
.LBB0_398:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp196:
	movl	$.L.str.47, %esi
	movq	-2416(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp197:
	movq	%rax, -2424(%rbp)       # 8-byte Spill
	jmp	.LBB0_399
.LBB0_399:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-228(%rbp), %esi
.Ltmp198:
	movq	-2424(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp199:
	movq	%rax, -2432(%rbp)       # 8-byte Spill
	jmp	.LBB0_400
.LBB0_400:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp200:
	movl	$.L.str.48, %esi
	movq	-2432(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp201:
	movq	%rax, -2440(%rbp)       # 8-byte Spill
	jmp	.LBB0_401
.LBB0_401:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-232(%rbp), %esi
.Ltmp202:
	movq	-2440(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp203:
	movq	%rax, -2448(%rbp)       # 8-byte Spill
	jmp	.LBB0_402
.LBB0_402:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp204:
	movl	$.L.str.49, %esi
	movq	-2448(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp205:
	movq	%rax, -2456(%rbp)       # 8-byte Spill
	jmp	.LBB0_403
.LBB0_403:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-236(%rbp), %esi
.Ltmp206:
	movq	-2456(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp207:
	movq	%rax, -2464(%rbp)       # 8-byte Spill
	jmp	.LBB0_404
.LBB0_404:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp208:
	movl	$.L.str.50, %esi
	movq	-2464(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp209:
	movq	%rax, -2472(%rbp)       # 8-byte Spill
	jmp	.LBB0_405
.LBB0_405:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-240(%rbp), %esi
.Ltmp210:
	movq	-2472(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp211:
	movq	%rax, -2480(%rbp)       # 8-byte Spill
	jmp	.LBB0_406
.LBB0_406:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp212:
	movl	$.L.str.51, %esi
	movq	-2480(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp213:
	movq	%rax, -2488(%rbp)       # 8-byte Spill
	jmp	.LBB0_407
.LBB0_407:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-252(%rbp), %esi
.Ltmp214:
	movq	-2488(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp215:
	movq	%rax, -2496(%rbp)       # 8-byte Spill
	jmp	.LBB0_408
.LBB0_408:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp216:
	movl	$.L.str.52, %esi
	movq	-2496(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp217:
	movq	%rax, -2504(%rbp)       # 8-byte Spill
	jmp	.LBB0_409
.LBB0_409:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-256(%rbp), %esi
.Ltmp218:
	movq	-2504(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp219:
	movq	%rax, -2512(%rbp)       # 8-byte Spill
	jmp	.LBB0_410
.LBB0_410:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp220:
	movl	$.L.str.53, %esi
	movq	-2512(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp221:
	movq	%rax, -2520(%rbp)       # 8-byte Spill
	jmp	.LBB0_411
.LBB0_411:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-244(%rbp), %esi
.Ltmp222:
	movq	-2520(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp223:
	movq	%rax, -2528(%rbp)       # 8-byte Spill
	jmp	.LBB0_412
.LBB0_412:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp224:
	movl	$.L.str.54, %esi
	movq	-2528(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp225:
	movq	%rax, -2536(%rbp)       # 8-byte Spill
	jmp	.LBB0_413
.LBB0_413:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-260(%rbp), %esi
.Ltmp226:
	movq	-2536(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp227:
	movq	%rax, -2544(%rbp)       # 8-byte Spill
	jmp	.LBB0_414
.LBB0_414:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp228:
	movl	$.L.str.55, %esi
	movq	-2544(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp229:
	movq	%rax, -2552(%rbp)       # 8-byte Spill
	jmp	.LBB0_415
.LBB0_415:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-248(%rbp), %esi
.Ltmp230:
	movq	-2552(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp231:
	movq	%rax, -2560(%rbp)       # 8-byte Spill
	jmp	.LBB0_416
.LBB0_416:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp232:
	movl	$.L.str.56, %esi
	movq	-2560(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp233:
	movq	%rax, -2568(%rbp)       # 8-byte Spill
	jmp	.LBB0_417
.LBB0_417:                              #   in Loop: Header=BB0_1 Depth=1
	movl	-264(%rbp), %esi
.Ltmp234:
	movq	-2568(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEj
.Ltmp235:
	movq	%rax, -2576(%rbp)       # 8-byte Spill
	jmp	.LBB0_418
.LBB0_418:                              #   in Loop: Header=BB0_1 Depth=1
.Ltmp236:
	movl	$.L.str.57, %esi
	movq	-2576(%rbp), %rdi       # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsEPKc
.Ltmp237:
	jmp	.LBB0_419
.LBB0_419:                              #   in Loop: Header=BB0_1 Depth=1
	leaq	-400(%rbp), %rdi
	callq	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev
	leaq	-352(%rbp), %rdi
	callq	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev
.LBB0_420:                              #   in Loop: Header=BB0_1 Depth=1
	jmp	.LBB0_421
.LBB0_421:                              #   in Loop: Header=BB0_1 Depth=1
	leaq	-32(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv
	jmp	.LBB0_1
.LBB0_422:
	addq	$2576, %rsp             # imm = 0xA10
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB0_423:
	.cfi_def_cfa %rbp, 16
	movq	-424(%rbp), %rdi
	callq	_Unwind_Resume
.Lfunc_end0:
	.size	_ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE, .Lfunc_end0-_ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table0:
.Lexception0:
	.byte	255                     # @LPStart Encoding = omit
	.byte	255                     # @TType Encoding = omit
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end0-.Lcst_begin0
.Lcst_begin0:
	.uleb128 .Lfunc_begin0-.Lfunc_begin0 # >> Call Site 1 <<
	.uleb128 .Ltmp0-.Lfunc_begin0   #   Call between .Lfunc_begin0 and .Ltmp0
	.byte	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.uleb128 .Ltmp0-.Lfunc_begin0   # >> Call Site 2 <<
	.uleb128 .Ltmp237-.Ltmp0        #   Call between .Ltmp0 and .Ltmp237
	.uleb128 .Ltmp426-.Lfunc_begin0 #     jumps to .Ltmp426
	.byte	0                       #   On action: cleanup
	.uleb128 .Ltmp237-.Lfunc_begin0 # >> Call Site 3 <<
	.uleb128 .Lfunc_end0-.Ltmp237   #   Call between .Ltmp237 and .Lfunc_end0
	.byte	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lcst_end0:
	.p2align	2
                                        # -- End function
	.section	.text._ZN4llvm6Module5beginEv,"axG",@progbits,_ZN4llvm6Module5beginEv,comdat
	.weak	_ZN4llvm6Module5beginEv # -- Begin function _ZN4llvm6Module5beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm6Module5beginEv,@function
_ZN4llvm6Module5beginEv:                # @_ZN4llvm6Module5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$24, %rax
	movq	%rax, %rdi
	callq	_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end1:
	.size	_ZN4llvm6Module5beginEv, .Lfunc_end1-_ZN4llvm6Module5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm6Module3endEv,"axG",@progbits,_ZN4llvm6Module3endEv,comdat
	.weak	_ZN4llvm6Module3endEv   # -- Begin function _ZN4llvm6Module3endEv
	.p2align	4, 0x90
	.type	_ZN4llvm6Module3endEv,@function
_ZN4llvm6Module3endEv:                  # @_ZN4llvm6Module3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$24, %rax
	movq	%rax, %rdi
	callq	_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end2:
	.size	_ZN4llvm6Module3endEv, .Lfunc_end2-_ZN4llvm6Module3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_,"axG",@progbits,_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_,comdat
	.weak	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_ # -- Begin function _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_
	.p2align	4, 0x90
	.type	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_,@function
_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_: # @_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end3:
	.size	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_, .Lfunc_end3-_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv,"axG",@progbits,_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv,comdat
	.weak	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv # -- Begin function _ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv,@function
_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv: # @_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	%rcx, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	xorb	$-1, %al
	testb	$1, %al
	jne	.LBB4_1
	jmp	.LBB4_2
.LBB4_1:
	jmp	.LBB4_3
.LBB4_2:
	movabsq	$.L.str.95, %rdi
	movabsq	$.L.str.96, %rsi
	movl	$139, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv, %rcx
	callq	__assert_fail
.LBB4_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rdi
	callq	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end4:
	.size	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv, .Lfunc_end4-_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev,"axG",@progbits,_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev,comdat
	.weak	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev # -- Begin function _ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev,@function
_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev: # @_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end5:
	.size	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev, .Lfunc_end5-_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev,"axG",@progbits,_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev,comdat
	.weak	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev # -- Begin function _ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev,@function
_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev: # @_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end6:
	.size	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev, .Lfunc_end6-_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8Function5beginEv,"axG",@progbits,_ZN4llvm8Function5beginEv,comdat
	.weak	_ZN4llvm8Function5beginEv # -- Begin function _ZN4llvm8Function5beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm8Function5beginEv,@function
_ZN4llvm8Function5beginEv:              # @_ZN4llvm8Function5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$72, %rax
	movq	%rax, %rdi
	callq	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end7:
	.size	_ZN4llvm8Function5beginEv, .Lfunc_end7-_ZN4llvm8Function5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8Function3endEv,"axG",@progbits,_ZN4llvm8Function3endEv,comdat
	.weak	_ZN4llvm8Function3endEv # -- Begin function _ZN4llvm8Function3endEv
	.p2align	4, 0x90
	.type	_ZN4llvm8Function3endEv,@function
_ZN4llvm8Function3endEv:                # @_ZN4llvm8Function3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$72, %rax
	movq	%rax, %rdi
	callq	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end8:
	.size	_ZN4llvm8Function3endEv, .Lfunc_end8-_ZN4llvm8Function3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_,"axG",@progbits,_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_,comdat
	.weak	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_ # -- Begin function _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_
	.p2align	4, 0x90
	.type	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_,@function
_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_: # @_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end9:
	.size	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_, .Lfunc_end9-_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv,"axG",@progbits,_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv,comdat
	.weak	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv # -- Begin function _ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv,@function
_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv: # @_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	%rcx, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	xorb	$-1, %al
	testb	$1, %al
	jne	.LBB10_1
	jmp	.LBB10_2
.LBB10_1:
	jmp	.LBB10_3
.LBB10_2:
	movabsq	$.L.str.95, %rdi
	movabsq	$.L.str.96, %rsi
	movl	$139, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv, %rcx
	callq	__assert_fail
.LBB10_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rdi
	callq	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end10:
	.size	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv, .Lfunc_end10-_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10BasicBlock13getTerminatorEv,"axG",@progbits,_ZN4llvm10BasicBlock13getTerminatorEv,comdat
	.weak	_ZN4llvm10BasicBlock13getTerminatorEv # -- Begin function _ZN4llvm10BasicBlock13getTerminatorEv
	.p2align	4, 0x90
	.type	_ZN4llvm10BasicBlock13getTerminatorEv,@function
_ZN4llvm10BasicBlock13getTerminatorEv:  # @_ZN4llvm10BasicBlock13getTerminatorEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm10BasicBlock13getTerminatorEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end11:
	.size	_ZN4llvm10BasicBlock13getTerminatorEv, .Lfunc_end11-_ZN4llvm10BasicBlock13getTerminatorEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12predecessorsEPNS_10BasicBlockE,"axG",@progbits,_ZN4llvm12predecessorsEPNS_10BasicBlockE,comdat
	.weak	_ZN4llvm12predecessorsEPNS_10BasicBlockE # -- Begin function _ZN4llvm12predecessorsEPNS_10BasicBlockE
	.p2align	4, 0x90
	.type	_ZN4llvm12predecessorsEPNS_10BasicBlockE,@function
_ZN4llvm12predecessorsEPNS_10BasicBlockE: # @_ZN4llvm12predecessorsEPNS_10BasicBlockE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	callq	_ZN4llvm10pred_beginEPNS_10BasicBlockE
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rdi
	callq	_ZN4llvm8pred_endEPNS_10BasicBlockE
	movq	%rax, -40(%rbp)
	movq	-32(%rbp), %rsi
	movq	-40(%rbp), %rdx
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end12:
	.size	_ZN4llvm12predecessorsEPNS_10BasicBlockE, .Lfunc_end12-_ZN4llvm12predecessorsEPNS_10BasicBlockE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv,"axG",@progbits,_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv,comdat
	.weak	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv # -- Begin function _ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv,@function
_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv: # @_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end13:
	.size	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv, .Lfunc_end13-_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv,"axG",@progbits,_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv,comdat
	.weak	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv # -- Begin function _ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv,@function
_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv: # @_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end14:
	.size	_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv, .Lfunc_end14-_ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_,"axG",@progbits,_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_,comdat
	.weak	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_ # -- Begin function _ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_
	.p2align	4, 0x90
	.type	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_,@function
_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_: # @_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_
	xorb	$-1, %al
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end15:
	.size	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_, .Lfunc_end15-_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv,"axG",@progbits,_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv,comdat
	.weak	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv # -- Begin function _ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv,@function
_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv: # @_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -17(%rbp)          # 1-byte Spill
	jne	.LBB16_2
# %bb.1:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB16_2
.LBB16_2:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB16_3
	jmp	.LBB16_4
.LBB16_3:
	jmp	.LBB16_5
.LBB16_4:
	movabsq	$.L.str.98, %rdi
	movabsq	$.L.str.99, %rsi
	movl	$74, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv, %rcx
	callq	__assert_fail
.LBB16_5:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv
	movq	%rax, %rdi
	callq	_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, %rdi
	callq	_ZN4llvm11Instruction9getParentEv
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end16:
	.size	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv, .Lfunc_end16-_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv,"axG",@progbits,_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv,comdat
	.weak	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv # -- Begin function _ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv,@function
_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv: # @_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -17(%rbp)          # 1-byte Spill
	jne	.LBB17_2
# %bb.1:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB17_2
.LBB17_2:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB17_3
	jmp	.LBB17_4
.LBB17_3:
	jmp	.LBB17_5
.LBB17_4:
	movabsq	$.L.str.98, %rdi
	movabsq	$.L.str.99, %rsi
	movl	$80, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv, %rcx
	callq	__assert_fail
.LBB17_5:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv
	movq	-16(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end17:
	.size	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv, .Lfunc_end17-_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10successorsEPNS_10BasicBlockE,"axG",@progbits,_ZN4llvm10successorsEPNS_10BasicBlockE,comdat
	.weak	_ZN4llvm10successorsEPNS_10BasicBlockE # -- Begin function _ZN4llvm10successorsEPNS_10BasicBlockE
	.p2align	4, 0x90
	.type	_ZN4llvm10successorsEPNS_10BasicBlockE,@function
_ZN4llvm10successorsEPNS_10BasicBlockE: # @_ZN4llvm10successorsEPNS_10BasicBlockE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, %rax
	movq	%rsi, -8(%rbp)
	movq	-8(%rbp), %rcx
	movq	%rdi, -48(%rbp)         # 8-byte Spill
	movq	%rcx, %rdi
	movq	%rax, -56(%rbp)         # 8-byte Spill
	callq	_ZN4llvm10succ_beginEPNS_10BasicBlockE
	movq	%rax, -24(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8succ_endEPNS_10BasicBlockE
	movq	%rax, -40(%rbp)
	movl	%edx, -32(%rbp)
	movq	-24(%rbp), %rsi
	movl	-16(%rbp), %edx
	movq	-40(%rbp), %rcx
	movl	-32(%rbp), %r8d
	movq	-48(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_
	movq	-56(%rbp), %rax         # 8-byte Reload
	addq	$64, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end18:
	.size	_ZN4llvm10successorsEPNS_10BasicBlockE, .Lfunc_end18-_ZN4llvm10successorsEPNS_10BasicBlockE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv,"axG",@progbits,_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv,comdat
	.weak	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv # -- Begin function _ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv,@function
_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv: # @_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movups	(%rax), %xmm0
	movaps	%xmm0, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	-8(%rbp), %edx
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end19:
	.size	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv, .Lfunc_end19-_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv,"axG",@progbits,_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv,comdat
	.weak	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv # -- Begin function _ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv,@function
_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv: # @_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movups	16(%rax), %xmm0
	movaps	%xmm0, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	-8(%rbp), %edx
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end20:
	.size	_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv, .Lfunc_end20-_ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_,"axG",@progbits,_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_,comdat
	.weak	_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_ # -- Begin function _ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_
	.p2align	4, 0x90
	.type	_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_,@function
_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_: # @_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	%rax, %rdi
	callq	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_
	xorb	$-1, %al
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end21:
	.size	_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_, .Lfunc_end21-_ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv,"axG",@progbits,_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv,comdat
	.weak	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv # -- Begin function _ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv,@function
_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv: # @_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movl	8(%rax), %esi
	callq	_ZNK4llvm11Instruction12getSuccessorEj
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end22:
	.size	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv, .Lfunc_end22-_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv,"axG",@progbits,_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv,comdat
	.weak	_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv # -- Begin function _ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv
	.p2align	4, 0x90
	.type	_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv,@function
_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv: # @_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movl	$1, %esi
	callq	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end23:
	.size	_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv, .Lfunc_end23-_ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10BasicBlock5beginEv,"axG",@progbits,_ZN4llvm10BasicBlock5beginEv,comdat
	.weak	_ZN4llvm10BasicBlock5beginEv # -- Begin function _ZN4llvm10BasicBlock5beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm10BasicBlock5beginEv,@function
_ZN4llvm10BasicBlock5beginEv:           # @_ZN4llvm10BasicBlock5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$40, %rax
	movq	%rax, %rdi
	callq	_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end24:
	.size	_ZN4llvm10BasicBlock5beginEv, .Lfunc_end24-_ZN4llvm10BasicBlock5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10BasicBlock3endEv,"axG",@progbits,_ZN4llvm10BasicBlock3endEv,comdat
	.weak	_ZN4llvm10BasicBlock3endEv # -- Begin function _ZN4llvm10BasicBlock3endEv
	.p2align	4, 0x90
	.type	_ZN4llvm10BasicBlock3endEv,@function
_ZN4llvm10BasicBlock3endEv:             # @_ZN4llvm10BasicBlock3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	addq	$40, %rax
	movq	%rax, %rdi
	callq	_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end25:
	.size	_ZN4llvm10BasicBlock3endEv, .Lfunc_end25-_ZN4llvm10BasicBlock3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_,"axG",@progbits,_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_,comdat
	.weak	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_ # -- Begin function _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_
	.p2align	4, 0x90
	.type	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_,@function
_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_: # @_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end26:
	.size	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_, .Lfunc_end26-_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv,"axG",@progbits,_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv,comdat
	.weak	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv # -- Begin function _ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv,@function
_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv: # @_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	%rcx, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	xorb	$-1, %al
	testb	$1, %al
	jne	.LBB27_1
	jmp	.LBB27_2
.LBB27_1:
	jmp	.LBB27_3
.LBB27_2:
	movabsq	$.L.str.95, %rdi
	movabsq	$.L.str.96, %rsi
	movl	$139, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv, %rcx
	callq	__assert_fail
.LBB27_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rdi
	callq	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end27:
	.size	_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv, .Lfunc_end27-_ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4User14getNumOperandsEv,"axG",@progbits,_ZNK4llvm4User14getNumOperandsEv,comdat
	.weak	_ZNK4llvm4User14getNumOperandsEv # -- Begin function _ZNK4llvm4User14getNumOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4User14getNumOperandsEv,@function
_ZNK4llvm4User14getNumOperandsEv:       # @_ZNK4llvm4User14getNumOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	20(%rax), %ecx
	andl	$268435455, %ecx        # imm = 0xFFFFFFF
	movl	%ecx, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end28:
	.size	_ZNK4llvm4User14getNumOperandsEv, .Lfunc_end28-_ZNK4llvm4User14getNumOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value7getTypeEv,"axG",@progbits,_ZNK4llvm5Value7getTypeEv,comdat
	.weak	_ZNK4llvm5Value7getTypeEv # -- Begin function _ZNK4llvm5Value7getTypeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value7getTypeEv,@function
_ZNK4llvm5Value7getTypeEv:              # @_ZNK4llvm5Value7getTypeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end29:
	.size	_ZNK4llvm5Value7getTypeEv, .Lfunc_end29-_ZNK4llvm5Value7getTypeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB30_1
	jmp	.LBB30_2
.LBB30_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB30_3
.LBB30_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB30_3
.LBB30_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end30:
	.size	_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end30-_ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4User10getOperandEj,"axG",@progbits,_ZNK4llvm4User10getOperandEj,comdat
	.weak	_ZNK4llvm4User10getOperandEj # -- Begin function _ZNK4llvm4User10getOperandEj
	.p2align	4, 0x90
	.type	_ZNK4llvm4User10getOperandEj,@function
_ZNK4llvm4User10getOperandEj:           # @_ZNK4llvm4User10getOperandEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rcx
	movl	-12(%rbp), %edx
	movl	20(%rcx), %esi
	andl	$268435455, %esi        # imm = 0xFFFFFFF
	cmpl	%esi, %edx
	movq	%rcx, -24(%rbp)         # 8-byte Spill
	movb	%al, -25(%rbp)          # 1-byte Spill
	jae	.LBB31_2
# %bb.1:
	movb	$1, %al
	movb	%al, -25(%rbp)          # 1-byte Spill
	jmp	.LBB31_2
.LBB31_2:
	movb	-25(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB31_3
	jmp	.LBB31_4
.LBB31_3:
	jmp	.LBB31_5
.LBB31_4:
	movabsq	$.L.str.69, %rdi
	movabsq	$.L.str.70, %rsi
	movl	$170, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm4User10getOperandEj, %rcx
	callq	__assert_fail
.LBB31_5:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4User14getOperandListEv
	movl	-12(%rbp), %ecx
	movl	%ecx, %edx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm3UsecvPNS_5ValueEEv
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end31:
	.size	_ZNK4llvm4User10getOperandEj, .Lfunc_end31-_ZNK4llvm4User10getOperandEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4Type11isPointerTyEv,"axG",@progbits,_ZNK4llvm4Type11isPointerTyEv,comdat
	.weak	_ZNK4llvm4Type11isPointerTyEv # -- Begin function _ZNK4llvm4Type11isPointerTyEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4Type11isPointerTyEv,@function
_ZNK4llvm4Type11isPointerTyEv:          # @_ZNK4llvm4Type11isPointerTyEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$15, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end32:
	.size	_ZNK4llvm4Type11isPointerTyEv, .Lfunc_end32-_ZNK4llvm4Type11isPointerTyEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_,@function
_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_: # @_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end33:
	.size	_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_, .Lfunc_end33-_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_,@function
_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_: # @_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end34:
	.size	_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_, .Lfunc_end34-_ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB35_1
	jmp	.LBB35_2
.LBB35_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB35_3
.LBB35_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB35_3
.LBB35_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end35:
	.size	_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end35-_ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm10BranchInst13isConditionalEv,"axG",@progbits,_ZNK4llvm10BranchInst13isConditionalEv,comdat
	.weak	_ZNK4llvm10BranchInst13isConditionalEv # -- Begin function _ZNK4llvm10BranchInst13isConditionalEv
	.p2align	4, 0x90
	.type	_ZNK4llvm10BranchInst13isConditionalEv,@function
_ZNK4llvm10BranchInst13isConditionalEv: # @_ZNK4llvm10BranchInst13isConditionalEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm10BranchInst14getNumOperandsEv
	cmpl	$3, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end36:
	.size	_ZNK4llvm10BranchInst13isConditionalEv, .Lfunc_end36-_ZNK4llvm10BranchInst13isConditionalEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm10BranchInst15isUnconditionalEv,"axG",@progbits,_ZNK4llvm10BranchInst15isUnconditionalEv,comdat
	.weak	_ZNK4llvm10BranchInst15isUnconditionalEv # -- Begin function _ZNK4llvm10BranchInst15isUnconditionalEv
	.p2align	4, 0x90
	.type	_ZNK4llvm10BranchInst15isUnconditionalEv,@function
_ZNK4llvm10BranchInst15isUnconditionalEv: # @_ZNK4llvm10BranchInst15isUnconditionalEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm10BranchInst14getNumOperandsEv
	cmpl	$1, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end37:
	.size	_ZNK4llvm10BranchInst15isUnconditionalEv, .Lfunc_end37-_ZNK4llvm10BranchInst15isUnconditionalEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB38_1
	jmp	.LBB38_2
.LBB38_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB38_3
.LBB38_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB38_3
.LBB38_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end38:
	.size	_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end38-_ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB39_1
	jmp	.LBB39_2
.LBB39_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB39_3
.LBB39_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB39_3
.LBB39_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end39:
	.size	_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end39-_ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase17getCalledFunctionEv,"axG",@progbits,_ZNK4llvm8CallBase17getCalledFunctionEv,comdat
	.weak	_ZNK4llvm8CallBase17getCalledFunctionEv # -- Begin function _ZNK4llvm8CallBase17getCalledFunctionEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase17getCalledFunctionEv,@function
_ZNK4llvm8CallBase17getCalledFunctionEv: # @_ZNK4llvm8CallBase17getCalledFunctionEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm8CallBase16getCalledOperandEv
	movq	%rax, %rdi
	callq	_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end40:
	.size	_ZNK4llvm8CallBase17getCalledFunctionEv, .Lfunc_end40-_ZNK4llvm8CallBase17getCalledFunctionEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4Type11isIntegerTyEv,"axG",@progbits,_ZNK4llvm4Type11isIntegerTyEv,comdat
	.weak	_ZNK4llvm4Type11isIntegerTyEv # -- Begin function _ZNK4llvm4Type11isIntegerTyEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4Type11isIntegerTyEv,@function
_ZNK4llvm4Type11isIntegerTyEv:          # @_ZNK4llvm4Type11isIntegerTyEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$11, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end41:
	.size	_ZNK4llvm4Type11isIntegerTyEv, .Lfunc_end41-_ZNK4llvm4Type11isIntegerTyEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase17getNumArgOperandsEv,"axG",@progbits,_ZNK4llvm8CallBase17getNumArgOperandsEv,comdat
	.weak	_ZNK4llvm8CallBase17getNumArgOperandsEv # -- Begin function _ZNK4llvm8CallBase17getNumArgOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase17getNumArgOperandsEv,@function
_ZNK4llvm8CallBase17getNumArgOperandsEv: # @_ZNK4llvm8CallBase17getNumArgOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm8CallBase8arg_sizeEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end42:
	.size	_ZNK4llvm8CallBase17getNumArgOperandsEv, .Lfunc_end42-_ZNK4llvm8CallBase17getNumArgOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase13getArgOperandEj,"axG",@progbits,_ZNK4llvm8CallBase13getArgOperandEj,comdat
	.weak	_ZNK4llvm8CallBase13getArgOperandEj # -- Begin function _ZNK4llvm8CallBase13getArgOperandEj
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase13getArgOperandEj,@function
_ZNK4llvm8CallBase13getArgOperandEj:    # @_ZNK4llvm8CallBase13getArgOperandEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	callq	_ZNK4llvm8CallBase17getNumArgOperandsEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	movl	-28(%rbp), %edx         # 4-byte Reload
	cmpl	%eax, %edx
	movb	%cl, -29(%rbp)          # 1-byte Spill
	jae	.LBB43_2
# %bb.1:
	movb	$1, %al
	movb	%al, -29(%rbp)          # 1-byte Spill
	jmp	.LBB43_2
.LBB43_2:
	movb	-29(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB43_3
	jmp	.LBB43_4
.LBB43_3:
	jmp	.LBB43_5
.LBB43_4:
	movabsq	$.L.str.78, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$1247, %edx             # imm = 0x4DF
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase13getArgOperandEj, %rcx
	callq	__assert_fail
.LBB43_5:
	movl	-12(%rbp), %esi
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm8CallBase10getOperandEj
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end43:
	.size	_ZNK4llvm8CallBase13getArgOperandEj, .Lfunc_end43-_ZNK4llvm8CallBase13getArgOperandEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB44_1
	jmp	.LBB44_2
.LBB44_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB44_3
.LBB44_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB44_3
.LBB44_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end44:
	.size	_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end44-_ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB45_1
	jmp	.LBB45_2
.LBB45_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB45_3
.LBB45_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB45_3
.LBB45_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end45:
	.size	_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end45-_ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB46_1
	jmp	.LBB46_2
.LBB46_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB46_3
.LBB46_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB46_3
.LBB46_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end46:
	.size	_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end46-_ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14BinaryOperator10getOperandEj,"axG",@progbits,_ZNK4llvm14BinaryOperator10getOperandEj,comdat
	.weak	_ZNK4llvm14BinaryOperator10getOperandEj # -- Begin function _ZNK4llvm14BinaryOperator10getOperandEj
	.p2align	4, 0x90
	.type	_ZNK4llvm14BinaryOperator10getOperandEj,@function
_ZNK4llvm14BinaryOperator10getOperandEj: # @_ZNK4llvm14BinaryOperator10getOperandEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movq	%rax, %rdx
	movq	%rdx, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	callq	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	movl	-28(%rbp), %esi         # 4-byte Reload
	cmpl	%eax, %esi
	movb	%cl, -29(%rbp)          # 1-byte Spill
	jae	.LBB47_2
# %bb.1:
	movb	$1, %al
	movb	%al, -29(%rbp)          # 1-byte Spill
	jmp	.LBB47_2
.LBB47_2:
	movb	-29(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB47_3
	jmp	.LBB47_4
.LBB47_3:
	jmp	.LBB47_5
.LBB47_4:
	movabsq	$.L.str.82, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$427, %edx              # imm = 0x1AB
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm14BinaryOperator10getOperandEj, %rcx
	callq	__assert_fail
.LBB47_5:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_
	movl	-12(%rbp), %ecx
	movl	%ecx, %edx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm3Use3getEv
	movq	%rax, %rdi
	callq	_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end47:
	.size	_ZNK4llvm14BinaryOperator10getOperandEj, .Lfunc_end47-_ZNK4llvm14BinaryOperator10getOperandEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4Type17isFloatingPointTyEv,"axG",@progbits,_ZNK4llvm4Type17isFloatingPointTyEv,comdat
	.weak	_ZNK4llvm4Type17isFloatingPointTyEv # -- Begin function _ZNK4llvm4Type17isFloatingPointTyEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4Type17isFloatingPointTyEv,@function
_ZNK4llvm4Type17isFloatingPointTyEv:    # @_ZNK4llvm4Type17isFloatingPointTyEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$1, %eax
	movb	$1, %cl
	movb	%cl, -17(%rbp)          # 1-byte Spill
	je	.LBB48_6
# %bb.1:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$2, %eax
	movb	$1, %cl
	movb	%cl, -17(%rbp)          # 1-byte Spill
	je	.LBB48_6
# %bb.2:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$3, %eax
	movb	$1, %cl
	movb	%cl, -17(%rbp)          # 1-byte Spill
	je	.LBB48_6
# %bb.3:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$4, %eax
	movb	$1, %cl
	movb	%cl, -17(%rbp)          # 1-byte Spill
	je	.LBB48_6
# %bb.4:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$5, %eax
	movb	$1, %cl
	movb	%cl, -17(%rbp)          # 1-byte Spill
	je	.LBB48_6
# %bb.5:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$6, %eax
	sete	%cl
	movb	%cl, -17(%rbp)          # 1-byte Spill
.LBB48_6:
	movb	-17(%rbp), %al          # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end48:
	.size	_ZNK4llvm4Type17isFloatingPointTyEv, .Lfunc_end48-_ZNK4llvm4Type17isFloatingPointTyEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_,@function
_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_: # @_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end49:
	.size	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_, .Lfunc_end49-_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end50:
	.size	_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_, .Lfunc_end50-_ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4Type8isVoidTyEv,"axG",@progbits,_ZNK4llvm4Type8isVoidTyEv,comdat
	.weak	_ZNK4llvm4Type8isVoidTyEv # -- Begin function _ZNK4llvm4Type8isVoidTyEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4Type8isVoidTyEv,@function
_ZNK4llvm4Type8isVoidTyEv:              # @_ZNK4llvm4Type8isVoidTyEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$0, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end51:
	.size	_ZNK4llvm4Type8isVoidTyEv, .Lfunc_end51-_ZNK4llvm4Type8isVoidTyEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
	testb	$1, %al
	jne	.LBB52_1
	jmp	.LBB52_2
.LBB52_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB52_3
.LBB52_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB52_3
.LBB52_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end52:
	.size	_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end52-_ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end53:
	.size	_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_, .Lfunc_end53-_ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4User8operandsEv,"axG",@progbits,_ZN4llvm4User8operandsEv,comdat
	.weak	_ZN4llvm4User8operandsEv # -- Begin function _ZN4llvm4User8operandsEv
	.p2align	4, 0x90
	.type	_ZN4llvm4User8operandsEv,@function
_ZN4llvm4User8operandsEv:               # @_ZN4llvm4User8operandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZN4llvm4User8op_beginEv
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -40(%rbp)         # 8-byte Spill
	callq	_ZN4llvm4User6op_endEv
	leaq	-16(%rbp), %rdi
	movq	-40(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end54:
	.size	_ZN4llvm4User8operandsEv, .Lfunc_end54-_ZN4llvm4User8operandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv,"axG",@progbits,_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv,comdat
	.weak	_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv # -- Begin function _ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv,@function
_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv: # @_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end55:
	.size	_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv, .Lfunc_end55-_ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv,"axG",@progbits,_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv,comdat
	.weak	_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv # -- Begin function _ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv,@function
_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv: # @_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end56:
	.size	_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv, .Lfunc_end56-_ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_,@function
_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_: # @_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end57:
	.size	_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_, .Lfunc_end57-_ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_,"axG",@progbits,_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_,comdat
	.weak	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_ # -- Begin function _ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_
	.p2align	4, 0x90
	.type	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_,@function
_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_: # @_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rax
	movq	%rdi, -56(%rbp)         # 8-byte Spill
	movq	%rax, %rdi
	callq	_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_
	movq	-56(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	movq	%rax, -48(%rbp)
	leaq	-40(%rbp), %rax
	movb	%dl, -40(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-48(%rbp), %rsi
	movq	%rax, %rdx
	callq	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	movq	-16(%rbp), %rax
	movb	-8(%rbp), %dl
	addq	$64, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end58:
	.size	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_, .Lfunc_end58-_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm3UsecvPNS_5ValueEEv,"axG",@progbits,_ZNK4llvm3UsecvPNS_5ValueEEv,comdat
	.weak	_ZNK4llvm3UsecvPNS_5ValueEEv # -- Begin function _ZNK4llvm3UsecvPNS_5ValueEEv
	.p2align	4, 0x90
	.type	_ZNK4llvm3UsecvPNS_5ValueEEv,@function
_ZNK4llvm3UsecvPNS_5ValueEEv:           # @_ZNK4llvm3UsecvPNS_5ValueEEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end59:
	.size	_ZNK4llvm3UsecvPNS_5ValueEEv, .Lfunc_end59-_ZNK4llvm3UsecvPNS_5ValueEEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,"axG",@progbits,_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,comdat
	.weak	_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_ # -- Begin function _ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,@function
_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_: # @_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_
	testb	$1, %al
	jne	.LBB60_1
	jmp	.LBB60_2
.LBB60_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB60_3
.LBB60_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB60_3
.LBB60_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end60:
	.size	_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, .Lfunc_end60-_ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm11ConstantInt7getTypeEv,"axG",@progbits,_ZNK4llvm11ConstantInt7getTypeEv,comdat
	.weak	_ZNK4llvm11ConstantInt7getTypeEv # -- Begin function _ZNK4llvm11ConstantInt7getTypeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm11ConstantInt7getTypeEv,@function
_ZNK4llvm11ConstantInt7getTypeEv:       # @_ZNK4llvm11ConstantInt7getTypeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm5Value7getTypeEv
	movq	%rax, %rdi
	callq	_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end61:
	.size	_ZNK4llvm11ConstantInt7getTypeEv, .Lfunc_end61-_ZNK4llvm11ConstantInt7getTypeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm11ConstantInt12getSExtValueEv,"axG",@progbits,_ZNK4llvm11ConstantInt12getSExtValueEv,comdat
	.weak	_ZNK4llvm11ConstantInt12getSExtValueEv # -- Begin function _ZNK4llvm11ConstantInt12getSExtValueEv
	.p2align	4, 0x90
	.type	_ZNK4llvm11ConstantInt12getSExtValueEv,@function
_ZNK4llvm11ConstantInt12getSExtValueEv: # @_ZNK4llvm11ConstantInt12getSExtValueEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$24, %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm5APInt12getSExtValueEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end62:
	.size	_ZNK4llvm11ConstantInt12getSExtValueEv, .Lfunc_end62-_ZNK4llvm11ConstantInt12getSExtValueEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,"axG",@progbits,_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,comdat
	.weak	_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_ # -- Begin function _ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,@function
_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_: # @_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_
	testb	$1, %al
	jne	.LBB63_1
	jmp	.LBB63_2
.LBB63_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB63_3
.LBB63_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB63_3
.LBB63_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end63:
	.size	_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, .Lfunc_end63-_ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_,"axG",@progbits,_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_,comdat
	.weak	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_ # -- Begin function _ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_
	.p2align	4, 0x90
	.type	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_,@function
_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_: # @_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	movq	%rax, -48(%rbp)
	leaq	-40(%rbp), %rax
	movb	%dl, -40(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-48(%rbp), %rsi
	movq	%rax, %rdx
	callq	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	movq	-16(%rbp), %rax
	movb	-8(%rbp), %dl
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end64:
	.size	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_, .Lfunc_end64-_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14GlobalVariable14getNumOperandsEv,"axG",@progbits,_ZNK4llvm14GlobalVariable14getNumOperandsEv,comdat
	.weak	_ZNK4llvm14GlobalVariable14getNumOperandsEv # -- Begin function _ZNK4llvm14GlobalVariable14getNumOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm14GlobalVariable14getNumOperandsEv,@function
_ZNK4llvm14GlobalVariable14getNumOperandsEv: # @_ZNK4llvm14GlobalVariable14getNumOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end65:
	.size	_ZNK4llvm14GlobalVariable14getNumOperandsEv, .Lfunc_end65-_ZNK4llvm14GlobalVariable14getNumOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm14GlobalVariable10getOperandEj,"axG",@progbits,_ZNK4llvm14GlobalVariable10getOperandEj,comdat
	.weak	_ZNK4llvm14GlobalVariable10getOperandEj # -- Begin function _ZNK4llvm14GlobalVariable10getOperandEj
	.p2align	4, 0x90
	.type	_ZNK4llvm14GlobalVariable10getOperandEj,@function
_ZNK4llvm14GlobalVariable10getOperandEj: # @_ZNK4llvm14GlobalVariable10getOperandEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movq	%rax, %rdx
	movq	%rdx, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	callq	_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	movl	-28(%rbp), %esi         # 4-byte Reload
	cmpl	%eax, %esi
	movb	%cl, -29(%rbp)          # 1-byte Spill
	jae	.LBB66_2
# %bb.1:
	movb	$1, %al
	movb	%al, -29(%rbp)          # 1-byte Spill
	jmp	.LBB66_2
.LBB66_2:
	movb	-29(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB66_3
	jmp	.LBB66_4
.LBB66_3:
	jmp	.LBB66_5
.LBB66_4:
	movabsq	$.L.str.93, %rdi
	movabsq	$.L.str.94, %rsi
	movl	$261, %edx              # imm = 0x105
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm14GlobalVariable10getOperandEj, %rcx
	callq	__assert_fail
.LBB66_5:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_
	movl	-12(%rbp), %ecx
	movl	%ecx, %edx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm3Use3getEv
	movq	%rax, %rdi
	callq	_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end66:
	.size	_ZNK4llvm14GlobalVariable10getOperandEj, .Lfunc_end66-_ZNK4llvm14GlobalVariable10getOperandEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_
	testb	$1, %al
	jne	.LBB67_1
	jmp	.LBB67_2
.LBB67_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB67_3
.LBB67_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB67_3
.LBB67_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end67:
	.size	_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end67-_ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11GEPOperator9idx_beginEv,"axG",@progbits,_ZN4llvm11GEPOperator9idx_beginEv,comdat
	.weak	_ZN4llvm11GEPOperator9idx_beginEv # -- Begin function _ZN4llvm11GEPOperator9idx_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm11GEPOperator9idx_beginEv,@function
_ZN4llvm11GEPOperator9idx_beginEv:      # @_ZN4llvm11GEPOperator9idx_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN4llvm4User8op_beginEv
	addq	$24, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end68:
	.size	_ZN4llvm11GEPOperator9idx_beginEv, .Lfunc_end68-_ZN4llvm11GEPOperator9idx_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11GEPOperator7idx_endEv,"axG",@progbits,_ZN4llvm11GEPOperator7idx_endEv,comdat
	.weak	_ZN4llvm11GEPOperator7idx_endEv # -- Begin function _ZN4llvm11GEPOperator7idx_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm11GEPOperator7idx_endEv,@function
_ZN4llvm11GEPOperator7idx_endEv:        # @_ZN4llvm11GEPOperator7idx_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN4llvm4User6op_endEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end69:
	.size	_ZN4llvm11GEPOperator7idx_endEv, .Lfunc_end69-_ZN4llvm11GEPOperator7idx_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end70:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv, .Lfunc_end70-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm10BasicBlock4sizeEv,"axG",@progbits,_ZNK4llvm10BasicBlock4sizeEv,comdat
	.weak	_ZNK4llvm10BasicBlock4sizeEv # -- Begin function _ZNK4llvm10BasicBlock4sizeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm10BasicBlock4sizeEv,@function
_ZNK4llvm10BasicBlock4sizeEv:           # @_ZNK4llvm10BasicBlock4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$40, %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end71:
	.size	_ZNK4llvm10BasicBlock4sizeEv, .Lfunc_end71-_ZNK4llvm10BasicBlock4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end72:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv, .Lfunc_end72-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv,"axG",@progbits,_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv,comdat
	.weak	_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv # -- Begin function _ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv
	.p2align	4, 0x90
	.type	_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv,@function
_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv: # @_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end73:
	.size	_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv, .Lfunc_end73-_ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv,"axG",@progbits,_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv,comdat
	.weak	_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv # -- Begin function _ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv
	.p2align	4, 0x90
	.type	_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv,@function
_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv: # @_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end74:
	.size	_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv, .Lfunc_end74-_ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11raw_ostreamlsENS_9StringRefE,"axG",@progbits,_ZN4llvm11raw_ostreamlsENS_9StringRefE,comdat
	.weak	_ZN4llvm11raw_ostreamlsENS_9StringRefE # -- Begin function _ZN4llvm11raw_ostreamlsENS_9StringRefE
	.p2align	4, 0x90
	.type	_ZN4llvm11raw_ostreamlsENS_9StringRefE,@function
_ZN4llvm11raw_ostreamlsENS_9StringRefE: # @_ZN4llvm11raw_ostreamlsENS_9StringRefE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rsi, -24(%rbp)
	movq	%rdx, -16(%rbp)
	movq	%rdi, -32(%rbp)
	movq	-32(%rbp), %rax
	leaq	-24(%rbp), %rdi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm9StringRef4sizeEv
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	-48(%rbp), %rcx         # 8-byte Reload
	movq	16(%rcx), %rdx
	movq	24(%rcx), %rsi
	subq	%rsi, %rdx
	cmpq	%rdx, %rax
	jbe	.LBB75_2
# %bb.1:
	leaq	-24(%rbp), %rdi
	callq	_ZNK4llvm9StringRef4dataEv
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZN4llvm11raw_ostream5writeEPKcm
	movq	%rax, -8(%rbp)
	jmp	.LBB75_5
.LBB75_2:
	cmpq	$0, -40(%rbp)
	je	.LBB75_4
# %bb.3:
	movq	-48(%rbp), %rax         # 8-byte Reload
	movq	24(%rax), %rdi
	leaq	-24(%rbp), %rcx
	movq	%rdi, -56(%rbp)         # 8-byte Spill
	movq	%rcx, %rdi
	callq	_ZNK4llvm9StringRef4dataEv
	movq	-40(%rbp), %rdx
	movq	-56(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	memcpy
	movq	-40(%rbp), %rax
	movq	-48(%rbp), %rcx         # 8-byte Reload
	addq	24(%rcx), %rax
	movq	%rax, 24(%rcx)
.LBB75_4:
	movq	-48(%rbp), %rax         # 8-byte Reload
	movq	%rax, -8(%rbp)
.LBB75_5:
	movq	-8(%rbp), %rax
	addq	$64, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end75:
	.size	_ZN4llvm11raw_ostreamlsENS_9StringRefE, .Lfunc_end75-_ZN4llvm11raw_ostreamlsENS_9StringRefE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11raw_ostreamlsEPKc,"axG",@progbits,_ZN4llvm11raw_ostreamlsEPKc,comdat
	.weak	_ZN4llvm11raw_ostreamlsEPKc # -- Begin function _ZN4llvm11raw_ostreamlsEPKc
	.p2align	4, 0x90
	.type	_ZN4llvm11raw_ostreamlsEPKc,@function
_ZN4llvm11raw_ostreamlsEPKc:            # @_ZN4llvm11raw_ostreamlsEPKc
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	leaq	-32(%rbp), %rax
	movq	%rdi, -40(%rbp)         # 8-byte Spill
	movq	%rax, %rdi
	callq	_ZN4llvm9StringRefC2EPKc
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdx
	movq	-40(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm11raw_ostreamlsENS_9StringRefE
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end76:
	.size	_ZN4llvm11raw_ostreamlsEPKc, .Lfunc_end76-_ZN4llvm11raw_ostreamlsEPKc
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11raw_ostreamlsEj,"axG",@progbits,_ZN4llvm11raw_ostreamlsEj,comdat
	.weak	_ZN4llvm11raw_ostreamlsEj # -- Begin function _ZN4llvm11raw_ostreamlsEj
	.p2align	4, 0x90
	.type	_ZN4llvm11raw_ostreamlsEj,@function
_ZN4llvm11raw_ostreamlsEj:              # @_ZN4llvm11raw_ostreamlsEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	callq	_ZN4llvm11raw_ostreamlsEm
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end77:
	.size	_ZN4llvm11raw_ostreamlsEj, .Lfunc_end77-_ZN4llvm11raw_ostreamlsEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev,"axG",@progbits,_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev,comdat
	.weak	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev # -- Begin function _ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev,@function
_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev: # @_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end78:
	.size	_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev, .Lfunc_end78-_ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev,"axG",@progbits,_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev,comdat
	.weak	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev # -- Begin function _ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev,@function
_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev: # @_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end79:
	.size	_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev, .Lfunc_end79-_ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end80:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv, .Lfunc_end80-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv,"axG",@progbits,_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv,comdat
	.weak	_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv # -- Begin function _ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv,@function
_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv: # @_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-24(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	leaq	-24(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end81:
	.size	_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv, .Lfunc_end81-_ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end82:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE, .Lfunc_end82-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv,"axG",@progbits,_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv,comdat
	.weak	_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv # -- Begin function _ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv
	.p2align	4, 0x90
	.type	_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv,@function
_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv: # @_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-8(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end83:
	.size	_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv, .Lfunc_end83-_ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end84:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev, .Lfunc_end84-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movq	%rcx, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$8, %rax
	movq	%rax, %rdi
	callq	_ZNSt15_Rb_tree_headerC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end85:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev, .Lfunc_end85-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev,"axG",@progbits,_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev,comdat
	.weak	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev # -- Begin function _ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	.p2align	4, 0x90
	.type	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev,@function
_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev: # @_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end86:
	.size	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev, .Lfunc_end86-_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev,"axG",@progbits,_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev,comdat
	.weak	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev # -- Begin function _ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev,@function
_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev: # @_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end87:
	.size	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev, .Lfunc_end87-_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm5ValueEEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt15_Rb_tree_headerC2Ev,"axG",@progbits,_ZNSt15_Rb_tree_headerC2Ev,comdat
	.weak	_ZNSt15_Rb_tree_headerC2Ev # -- Begin function _ZNSt15_Rb_tree_headerC2Ev
	.p2align	4, 0x90
	.type	_ZNSt15_Rb_tree_headerC2Ev,@function
_ZNSt15_Rb_tree_headerC2Ev:             # @_ZNSt15_Rb_tree_headerC2Ev
.Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception1
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, (%rax)
.Ltmp427:
	movq	%rax, %rdi
	callq	_ZNSt15_Rb_tree_header8_M_resetEv
.Ltmp428:
	jmp	.LBB88_1
.LBB88_1:
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB88_2:
	.cfi_def_cfa %rbp, 16
.Ltmp429:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -12(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.Lfunc_end88:
	.size	_ZNSt15_Rb_tree_headerC2Ev, .Lfunc_end88-_ZNSt15_Rb_tree_headerC2Ev
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table88:
.Lexception1:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase0-.Lttbaseref0
.Lttbaseref0:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end1-.Lcst_begin1
.Lcst_begin1:
	.uleb128 .Ltmp427-.Lfunc_begin1 # >> Call Site 1 <<
	.uleb128 .Ltmp428-.Ltmp427      #   Call between .Ltmp427 and .Ltmp428
	.uleb128 .Ltmp429-.Lfunc_begin1 #     jumps to .Ltmp429
	.byte	1                       #   On action: 1
.Lcst_end1:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase0:
	.p2align	2
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end89:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev, .Lfunc_end89-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt15_Rb_tree_header8_M_resetEv,"axG",@progbits,_ZNSt15_Rb_tree_header8_M_resetEv,comdat
	.weak	_ZNSt15_Rb_tree_header8_M_resetEv # -- Begin function _ZNSt15_Rb_tree_header8_M_resetEv
	.p2align	4, 0x90
	.type	_ZNSt15_Rb_tree_header8_M_resetEv,@function
_ZNSt15_Rb_tree_header8_M_resetEv:      # @_ZNSt15_Rb_tree_header8_M_resetEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	%rax, 16(%rax)
	movq	%rax, 24(%rax)
	movq	$0, 32(%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end90:
	.size	_ZNSt15_Rb_tree_header8_M_resetEv, .Lfunc_end90-_ZNSt15_Rb_tree_header8_M_resetEv
	.cfi_endproc
                                        # -- End function
	.section	.text.__clang_call_terminate,"axG",@progbits,__clang_call_terminate,comdat
	.hidden	__clang_call_terminate  # -- Begin function __clang_call_terminate
	.weak	__clang_call_terminate
	.p2align	4, 0x90
	.type	__clang_call_terminate,@function
__clang_call_terminate:                 # @__clang_call_terminate
# %bb.0:
	pushq	%rax
	callq	__cxa_begin_catch
	movq	%rax, (%rsp)            # 8-byte Spill
	callq	_ZSt9terminatev
.Lfunc_end91:
	.size	__clang_call_terminate, .Lfunc_end91-__clang_call_terminate
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end92:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev, .Lfunc_end92-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movq	%rcx, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$8, %rax
	movq	%rax, %rdi
	callq	_ZNSt15_Rb_tree_headerC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end93:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev, .Lfunc_end93-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev,"axG",@progbits,_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev,comdat
	.weak	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev # -- Begin function _ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	.p2align	4, 0x90
	.type	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev,@function
_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev: # @_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end94:
	.size	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev, .Lfunc_end94-_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev,"axG",@progbits,_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev,comdat
	.weak	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev # -- Begin function _ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev
	.p2align	4, 0x90
	.type	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev,@function
_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev: # @_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end95:
	.size	_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev, .Lfunc_end95-_ZNSt20_Rb_tree_key_compareISt4lessIPN4llvm14GlobalVariableEEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end96:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev, .Lfunc_end96-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv,"axG",@progbits,_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv,comdat
	.weak	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv # -- Begin function _ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv,@function
_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv: # @_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-24(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	leaq	-24(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end97:
	.size	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv, .Lfunc_end97-_ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end98:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE, .Lfunc_end98-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv,"axG",@progbits,_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv,comdat
	.weak	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv # -- Begin function _ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv
	.p2align	4, 0x90
	.type	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv,@function
_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv: # @_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-8(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end99:
	.size	_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv, .Lfunc_end99-_ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10pred_beginEPNS_10BasicBlockE,"axG",@progbits,_ZN4llvm10pred_beginEPNS_10BasicBlockE,comdat
	.weak	_ZN4llvm10pred_beginEPNS_10BasicBlockE # -- Begin function _ZN4llvm10pred_beginEPNS_10BasicBlockE
	.p2align	4, 0x90
	.type	_ZN4llvm10pred_beginEPNS_10BasicBlockE,@function
_ZN4llvm10pred_beginEPNS_10BasicBlockE: # @_ZN4llvm10pred_beginEPNS_10BasicBlockE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rsi
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end100:
	.size	_ZN4llvm10pred_beginEPNS_10BasicBlockE, .Lfunc_end100-_ZN4llvm10pred_beginEPNS_10BasicBlockE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8pred_endEPNS_10BasicBlockE,"axG",@progbits,_ZN4llvm8pred_endEPNS_10BasicBlockE,comdat
	.weak	_ZN4llvm8pred_endEPNS_10BasicBlockE # -- Begin function _ZN4llvm8pred_endEPNS_10BasicBlockE
	.p2align	4, 0x90
	.type	_ZN4llvm8pred_endEPNS_10BasicBlockE,@function
_ZN4llvm8pred_endEPNS_10BasicBlockE:    # @_ZN4llvm8pred_endEPNS_10BasicBlockE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rsi
	leaq	-8(%rbp), %rdi
	movl	$1, %edx
	callq	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end101:
	.size	_ZN4llvm8pred_endEPNS_10BasicBlockE, .Lfunc_end101-_ZN4llvm8pred_endEPNS_10BasicBlockE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_,"axG",@progbits,_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_,comdat
	.weak	_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_ # -- Begin function _ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_
	.p2align	4, 0x90
	.type	_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_,@function
_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_: # @_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rsi, -8(%rbp)
	movq	%rdx, -16(%rbp)
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	leaq	-8(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	leaq	-16(%rbp), %rdi
	callq	_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, 8(%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end102:
	.size	_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_, .Lfunc_end102-_ZN4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEEC2ES7_S7_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_,"axG",@progbits,_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_,comdat
	.weak	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_ # -- Begin function _ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_
	.p2align	4, 0x90
	.type	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_,@function
_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_: # @_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZN4llvm5Value10user_beginEv
	movq	-24(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rdi
	callq	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end103:
	.size	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_, .Lfunc_end103-_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value10user_beginEv,"axG",@progbits,_ZN4llvm5Value10user_beginEv,comdat
	.weak	_ZN4llvm5Value10user_beginEv # -- Begin function _ZN4llvm5Value10user_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm5Value10user_beginEv,@function
_ZN4llvm5Value10user_beginEv:           # @_ZN4llvm5Value10user_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5Value26assertModuleIsMaterializedEv
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm5Value23materialized_user_beginEv
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end104:
	.size	_ZN4llvm5Value10user_beginEv, .Lfunc_end104-_ZN4llvm5Value10user_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv,"axG",@progbits,_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv,comdat
	.weak	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv # -- Begin function _ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv
	.p2align	4, 0x90
	.type	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv,@function
_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv: # @_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)         # 8-byte Spill
.LBB105_1:                              # =>This Inner Loop Header: Depth=1
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	xorb	$-1, %al
	testb	$1, %al
	jne	.LBB105_2
	jmp	.LBB105_7
.LBB105_2:                              #   in Loop: Header=BB105_1 Depth=1
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv
	movq	%rax, %rdi
	callq	_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.LBB105_6
# %bb.3:                                #   in Loop: Header=BB105_1 Depth=1
	movq	-16(%rbp), %rdi
	callq	_ZNK4llvm11Instruction12isTerminatorEv
	testb	$1, %al
	jne	.LBB105_4
	jmp	.LBB105_5
.LBB105_4:
	jmp	.LBB105_7
.LBB105_5:                              #   in Loop: Header=BB105_1 Depth=1
	jmp	.LBB105_6
.LBB105_6:                              #   in Loop: Header=BB105_1 Depth=1
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv
	jmp	.LBB105_1
.LBB105_7:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end105:
	.size	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv, .Lfunc_end105-_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value26assertModuleIsMaterializedEv,"axG",@progbits,_ZNK4llvm5Value26assertModuleIsMaterializedEv,comdat
	.weak	_ZNK4llvm5Value26assertModuleIsMaterializedEv # -- Begin function _ZNK4llvm5Value26assertModuleIsMaterializedEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value26assertModuleIsMaterializedEv,@function
_ZNK4llvm5Value26assertModuleIsMaterializedEv: # @_ZNK4llvm5Value26assertModuleIsMaterializedEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value30assertModuleIsMaterializedImplEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end106:
	.size	_ZNK4llvm5Value26assertModuleIsMaterializedEv, .Lfunc_end106-_ZNK4llvm5Value26assertModuleIsMaterializedEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value23materialized_user_beginEv,"axG",@progbits,_ZN4llvm5Value23materialized_user_beginEv,comdat
	.weak	_ZN4llvm5Value23materialized_user_beginEv # -- Begin function _ZN4llvm5Value23materialized_user_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm5Value23materialized_user_beginEv,@function
_ZN4llvm5Value23materialized_user_beginEv: # @_ZN4llvm5Value23materialized_user_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rsi
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end107:
	.size	_ZN4llvm5Value23materialized_user_beginEv, .Lfunc_end107-_ZN4llvm5Value23materialized_user_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE,"axG",@progbits,_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE,comdat
	.weak	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE # -- Begin function _ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE
	.p2align	4, 0x90
	.type	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE,@function
_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE: # @_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end108:
	.size	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE, .Lfunc_end108-_ZN4llvm5Value18user_iterator_implINS_4UserEEC2EPNS_3UseE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_,"axG",@progbits,_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_,comdat
	.weak	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_ # -- Begin function _ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_
	.p2align	4, 0x90
	.type	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_,@function
_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_: # @_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end109:
	.size	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_, .Lfunc_end109-_ZN4llvm5Value17use_iterator_implINS_3UseEEC2EPS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv,"axG",@progbits,_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv,comdat
	.weak	_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv # -- Begin function _ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv,@function
_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv: # @_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%esi, %esi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	movq	%rdi, -24(%rbp)         # 8-byte Spill
	movq	%rcx, %rdi
	movl	$8, %edx
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	memset
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev
	movq	-24(%rbp), %rdi         # 8-byte Reload
	leaq	-16(%rbp), %rsi
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end110:
	.size	_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv, .Lfunc_end110-_ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_
	testb	$1, %al
	jne	.LBB111_1
	jmp	.LBB111_2
.LBB111_1:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB111_3
.LBB111_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB111_3
.LBB111_3:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end111:
	.size	_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end111-_ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv,"axG",@progbits,_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv,comdat
	.weak	_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv # -- Begin function _ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv,@function
_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv: # @_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv
	movq	%rax, %rdi
	callq	_ZNK4llvm3Use7getUserEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end112:
	.size	_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv, .Lfunc_end112-_ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm11Instruction12isTerminatorEv,"axG",@progbits,_ZNK4llvm11Instruction12isTerminatorEv,comdat
	.weak	_ZNK4llvm11Instruction12isTerminatorEv # -- Begin function _ZNK4llvm11Instruction12isTerminatorEv
	.p2align	4, 0x90
	.type	_ZNK4llvm11Instruction12isTerminatorEv,@function
_ZNK4llvm11Instruction12isTerminatorEv: # @_ZNK4llvm11Instruction12isTerminatorEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	movl	%eax, %edi
	callq	_ZN4llvm11Instruction12isTerminatorEj
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end113:
	.size	_ZNK4llvm11Instruction12isTerminatorEv, .Lfunc_end113-_ZNK4llvm11Instruction12isTerminatorEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value18user_iterator_implINS_4UserEEppEv,"axG",@progbits,_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv,comdat
	.weak	_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv # -- Begin function _ZN4llvm5Value18user_iterator_implINS_4UserEEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv,@function
_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv: # @_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, -24(%rbp)         # 8-byte Spill
	movq	%rcx, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end114:
	.size	_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv, .Lfunc_end114-_ZN4llvm5Value18user_iterator_implINS_4UserEEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_,"axG",@progbits,_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_,comdat
	.weak	_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_ # -- Begin function _ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_,@function
_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_: # @_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end115:
	.size	_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_, .Lfunc_end115-_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev,"axG",@progbits,_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev,comdat
	.weak	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev # -- Begin function _ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev
	.p2align	4, 0x90
	.type	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev,@function
_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev: # @_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end116:
	.size	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev, .Lfunc_end116-_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_,"axG",@progbits,_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_,comdat
	.weak	_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_ # -- Begin function _ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_,@function
_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_: # @_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	sete	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end117:
	.size	_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_, .Lfunc_end117-_ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev,"axG",@progbits,_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev,comdat
	.weak	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev # -- Begin function _ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev
	.p2align	4, 0x90
	.type	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev,@function
_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev: # @_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end118:
	.size	_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev, .Lfunc_end118-_ZN4llvm5Value17use_iterator_implINS_3UseEEC2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_,@function
_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_: # @_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end119:
	.size	_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_, .Lfunc_end119-_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB120_1
	jmp	.LBB120_2
.LBB120_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB120_2
.LBB120_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB120_3
	jmp	.LBB120_4
.LBB120_3:
	jmp	.LBB120_5
.LBB120_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB120_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end120:
	.size	_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end120-_ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end121:
	.size	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_, .Lfunc_end121-_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end122:
	.size	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_, .Lfunc_end122-_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_,"axG",@progbits,_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_,comdat
	.weak	_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_ # -- Begin function _ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_,@function
_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_: # @_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_
	movq	(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end123:
	.size	_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_, .Lfunc_end123-_ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB124_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB124_2
.LBB124_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB124_3
	jmp	.LBB124_4
.LBB124_3:
	jmp	.LBB124_5
.LBB124_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_, %rcx
	callq	__assert_fail
.LBB124_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end124:
	.size	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_, .Lfunc_end124-_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN4llvm11Instruction7classofEPKNS_5ValueE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end125:
	.size	_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_, .Lfunc_end125-_ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11Instruction7classofEPKNS_5ValueE,"axG",@progbits,_ZN4llvm11Instruction7classofEPKNS_5ValueE,comdat
	.weak	_ZN4llvm11Instruction7classofEPKNS_5ValueE # -- Begin function _ZN4llvm11Instruction7classofEPKNS_5ValueE
	.p2align	4, 0x90
	.type	_ZN4llvm11Instruction7classofEPKNS_5ValueE,@function
_ZN4llvm11Instruction7classofEPKNS_5ValueE: # @_ZN4llvm11Instruction7classofEPKNS_5ValueE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value10getValueIDEv
	cmpl	$24, %eax
	setae	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end126:
	.size	_ZN4llvm11Instruction7classofEPKNS_5ValueE, .Lfunc_end126-_ZN4llvm11Instruction7classofEPKNS_5ValueE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value10getValueIDEv,"axG",@progbits,_ZNK4llvm5Value10getValueIDEv,comdat
	.weak	_ZNK4llvm5Value10getValueIDEv # -- Begin function _ZNK4llvm5Value10getValueIDEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value10getValueIDEv,@function
_ZNK4llvm5Value10getValueIDEv:          # @_ZNK4llvm5Value10getValueIDEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	16(%rax), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end127:
	.size	_ZNK4llvm5Value10getValueIDEv, .Lfunc_end127-_ZNK4llvm5Value10getValueIDEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_,"axG",@progbits,_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_,comdat
	.weak	_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_ # -- Begin function _ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_,@function
_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_: # @_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end128:
	.size	_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_, .Lfunc_end128-_ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end129:
	.size	_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_, .Lfunc_end129-_ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv,"axG",@progbits,_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv,comdat
	.weak	_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv # -- Begin function _ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv,@function
_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv: # @_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end130:
	.size	_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv, .Lfunc_end130-_ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv,"axG",@progbits,_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv,comdat
	.weak	_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv # -- Begin function _ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv,@function
_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv: # @_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rcx
	cmpq	$0, (%rcx)
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	movb	%al, -17(%rbp)          # 1-byte Spill
	je	.LBB131_2
# %bb.1:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB131_2
.LBB131_2:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB131_3
	jmp	.LBB131_4
.LBB131_3:
	jmp	.LBB131_5
.LBB131_4:
	movabsq	$.L.str.64, %rdi
	movabsq	$.L.str.65, %rsi
	movl	$153, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv, %rcx
	callq	__assert_fail
.LBB131_5:
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end131:
	.size	_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv, .Lfunc_end131-_ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11Instruction12isTerminatorEj,"axG",@progbits,_ZN4llvm11Instruction12isTerminatorEj,comdat
	.weak	_ZN4llvm11Instruction12isTerminatorEj # -- Begin function _ZN4llvm11Instruction12isTerminatorEj
	.p2align	4, 0x90
	.type	_ZN4llvm11Instruction12isTerminatorEj,@function
_ZN4llvm11Instruction12isTerminatorEj:  # @_ZN4llvm11Instruction12isTerminatorEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movl	%edi, -4(%rbp)
	cmpl	$1, -4(%rbp)
	movb	%al, -5(%rbp)           # 1-byte Spill
	jb	.LBB132_2
# %bb.1:
	cmpl	$12, -4(%rbp)
	setb	%al
	movb	%al, -5(%rbp)           # 1-byte Spill
.LBB132_2:
	movb	-5(%rbp), %al           # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end132:
	.size	_ZN4llvm11Instruction12isTerminatorEj, .Lfunc_end132-_ZN4llvm11Instruction12isTerminatorEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm11Instruction9getOpcodeEv,"axG",@progbits,_ZNK4llvm11Instruction9getOpcodeEv,comdat
	.weak	_ZNK4llvm11Instruction9getOpcodeEv # -- Begin function _ZNK4llvm11Instruction9getOpcodeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm11Instruction9getOpcodeEv,@function
_ZNK4llvm11Instruction9getOpcodeEv:     # @_ZNK4llvm11Instruction9getOpcodeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm5Value10getValueIDEv
	subl	$24, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end133:
	.size	_ZNK4llvm11Instruction9getOpcodeEv, .Lfunc_end133-_ZNK4llvm11Instruction9getOpcodeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value17use_iterator_implINS_3UseEEppEv,"axG",@progbits,_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv,comdat
	.weak	_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv # -- Begin function _ZN4llvm5Value17use_iterator_implINS_3UseEEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv,@function
_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv: # @_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rcx
	cmpq	$0, (%rcx)
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	movb	%al, -17(%rbp)          # 1-byte Spill
	je	.LBB134_2
# %bb.1:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB134_2
.LBB134_2:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB134_3
	jmp	.LBB134_4
.LBB134_3:
	jmp	.LBB134_5
.LBB134_4:
	movabsq	$.L.str.67, %rdi
	movabsq	$.L.str.65, %rsi
	movl	$141, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm5Value17use_iterator_implINS_3UseEEppEv, %rcx
	callq	__assert_fail
.LBB134_5:
	movq	-16(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rdi
	callq	_ZNK4llvm3Use7getNextEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end134:
	.size	_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv, .Lfunc_end134-_ZN4llvm5Value17use_iterator_implINS_3UseEEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm3Use7getNextEv,"axG",@progbits,_ZNK4llvm3Use7getNextEv,comdat
	.weak	_ZNK4llvm3Use7getNextEv # -- Begin function _ZNK4llvm3Use7getNextEv
	.p2align	4, 0x90
	.type	_ZNK4llvm3Use7getNextEv,@function
_ZNK4llvm3Use7getNextEv:                # @_ZNK4llvm3Use7getNextEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end135:
	.size	_ZNK4llvm3Use7getNextEv, .Lfunc_end135-_ZNK4llvm3Use7getNextEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b,"axG",@progbits,_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b,comdat
	.weak	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b # -- Begin function _ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b
	.p2align	4, 0x90
	.type	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b,@function
_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b: # @_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
                                        # kill: def $dl killed $dl killed $edx
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	andb	$1, %dl
	movb	%dl, -17(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZN4llvm5Value8user_endEv
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end136:
	.size	_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b, .Lfunc_end136-_ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEC2EPS1_b
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5Value8user_endEv,"axG",@progbits,_ZN4llvm5Value8user_endEv,comdat
	.weak	_ZN4llvm5Value8user_endEv # -- Begin function _ZN4llvm5Value8user_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm5Value8user_endEv,@function
_ZN4llvm5Value8user_endEv:              # @_ZN4llvm5Value8user_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%esi, %esi
	movq	%rdi, -16(%rbp)
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	movq	%rcx, %rdi
	movl	$8, %edx
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	memset
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm5Value18user_iterator_implINS_4UserEEC2Ev
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end137:
	.size	_ZN4llvm5Value8user_endEv, .Lfunc_end137-_ZN4llvm5Value8user_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_,"axG",@progbits,_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_,comdat
	.weak	_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_ # -- Begin function _ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_
	.p2align	4, 0x90
	.type	_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_,@function
_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_: # @_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end138:
	.size	_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_, .Lfunc_end138-_ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10succ_beginEPNS_10BasicBlockE,"axG",@progbits,_ZN4llvm10succ_beginEPNS_10BasicBlockE,comdat
	.weak	_ZN4llvm10succ_beginEPNS_10BasicBlockE # -- Begin function _ZN4llvm10succ_beginEPNS_10BasicBlockE
	.p2align	4, 0x90
	.type	_ZN4llvm10succ_beginEPNS_10BasicBlockE,@function
_ZN4llvm10succ_beginEPNS_10BasicBlockE: # @_ZN4llvm10succ_beginEPNS_10BasicBlockE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	callq	_ZN4llvm10BasicBlock13getTerminatorEv
	leaq	-16(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_
	movq	-16(%rbp), %rax
	movl	-8(%rbp), %edx
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end139:
	.size	_ZN4llvm10succ_beginEPNS_10BasicBlockE, .Lfunc_end139-_ZN4llvm10succ_beginEPNS_10BasicBlockE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8succ_endEPNS_10BasicBlockE,"axG",@progbits,_ZN4llvm8succ_endEPNS_10BasicBlockE,comdat
	.weak	_ZN4llvm8succ_endEPNS_10BasicBlockE # -- Begin function _ZN4llvm8succ_endEPNS_10BasicBlockE
	.p2align	4, 0x90
	.type	_ZN4llvm8succ_endEPNS_10BasicBlockE,@function
_ZN4llvm8succ_endEPNS_10BasicBlockE:    # @_ZN4llvm8succ_endEPNS_10BasicBlockE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	callq	_ZN4llvm10BasicBlock13getTerminatorEv
	leaq	-16(%rbp), %rdi
	movl	$1, %edx
	movq	%rax, %rsi
	callq	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b
	movq	-16(%rbp), %rax
	movl	-8(%rbp), %edx
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end140:
	.size	_ZN4llvm8succ_endEPNS_10BasicBlockE, .Lfunc_end140-_ZN4llvm8succ_endEPNS_10BasicBlockE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_,"axG",@progbits,_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_,comdat
	.weak	_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_ # -- Begin function _ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_
	.p2align	4, 0x90
	.type	_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_,@function
_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_: # @_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rsi, -16(%rbp)
	movl	%edx, -8(%rbp)
	movq	%rcx, -32(%rbp)
	movl	%r8d, -24(%rbp)
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	leaq	-16(%rbp), %rdi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_
	movq	(%rax), %rcx
	movq	-48(%rbp), %rsi         # 8-byte Reload
	movq	%rcx, (%rsi)
	movq	8(%rax), %rax
	movq	%rax, 8(%rsi)
	leaq	-32(%rbp), %rdi
	callq	_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_
	movq	(%rax), %rcx
	movq	-48(%rbp), %rsi         # 8-byte Reload
	movq	%rcx, 16(%rsi)
	movq	8(%rax), %rax
	movq	%rax, 24(%rsi)
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end141:
	.size	_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_, .Lfunc_end141-_ZN4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEEC2ES4_S4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_,"axG",@progbits,_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_,comdat
	.weak	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_ # -- Begin function _ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_
	.p2align	4, 0x90
	.type	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_,@function
_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_: # @_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	movl	$0, 8(%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end142:
	.size	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_, .Lfunc_end142-_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b,"axG",@progbits,_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b,comdat
	.weak	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b # -- Begin function _ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b
	.p2align	4, 0x90
	.type	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b,@function
_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b: # @_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
                                        # kill: def $dl killed $dl killed $edx
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	andb	$1, %dl
	movb	%dl, -17(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	cmpq	$0, -16(%rbp)
	movq	%rax, -32(%rbp)         # 8-byte Spill
	je	.LBB143_2
# %bb.1:
	movq	-16(%rbp), %rdi
	callq	_ZNK4llvm11Instruction16getNumSuccessorsEv
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movl	%eax, 8(%rcx)
	jmp	.LBB143_3
.LBB143_2:
	movq	-32(%rbp), %rax         # 8-byte Reload
	movl	$0, 8(%rax)
.LBB143_3:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end143:
	.size	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b, .Lfunc_end143-_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEC2EPS1_b
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_,"axG",@progbits,_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_,comdat
	.weak	_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_ # -- Begin function _ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_
	.p2align	4, 0x90
	.type	_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_,@function
_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_: # @_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end144:
	.size	_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_, .Lfunc_end144-_ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv,"axG",@progbits,_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv,comdat
	.weak	_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv # -- Begin function _ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv,@function
_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv: # @_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-24(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	leaq	-24(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end145:
	.size	_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv, .Lfunc_end145-_ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end146:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE, .Lfunc_end146-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv,"axG",@progbits,_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv,comdat
	.weak	_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv # -- Begin function _ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.p2align	4, 0x90
	.type	_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv,@function
_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv: # @_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-8(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEC2ERNS_15ilist_node_implIS4_EE
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end147:
	.size	_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv, .Lfunc_end147-_ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4User14getOperandListEv,"axG",@progbits,_ZNK4llvm4User14getOperandListEv,comdat
	.weak	_ZNK4llvm4User14getOperandListEv # -- Begin function _ZNK4llvm4User14getOperandListEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4User14getOperandListEv,@function
_ZNK4llvm4User14getOperandListEv:       # @_ZNK4llvm4User14getOperandListEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	20(%rax), %ecx
	shrl	$30, %ecx
	andl	$1, %ecx
	cmpl	$0, %ecx
	movq	%rax, -16(%rbp)         # 8-byte Spill
	je	.LBB148_2
# %bb.1:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4User18getHungOffOperandsEv
	movq	%rax, -24(%rbp)         # 8-byte Spill
	jmp	.LBB148_3
.LBB148_2:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm4User20getIntrusiveOperandsEv
	movq	%rax, -24(%rbp)         # 8-byte Spill
.LBB148_3:
	movq	-24(%rbp), %rax         # 8-byte Reload
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end148:
	.size	_ZNK4llvm4User14getOperandListEv, .Lfunc_end148-_ZNK4llvm4User14getOperandListEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4User18getHungOffOperandsEv,"axG",@progbits,_ZNK4llvm4User18getHungOffOperandsEv,comdat
	.weak	_ZNK4llvm4User18getHungOffOperandsEv # -- Begin function _ZNK4llvm4User18getHungOffOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4User18getHungOffOperandsEv,@function
_ZNK4llvm4User18getHungOffOperandsEv:   # @_ZNK4llvm4User18getHungOffOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end149:
	.size	_ZNK4llvm4User18getHungOffOperandsEv, .Lfunc_end149-_ZNK4llvm4User18getHungOffOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4User20getIntrusiveOperandsEv,"axG",@progbits,_ZNK4llvm4User20getIntrusiveOperandsEv,comdat
	.weak	_ZNK4llvm4User20getIntrusiveOperandsEv # -- Begin function _ZNK4llvm4User20getIntrusiveOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4User20getIntrusiveOperandsEv,@function
_ZNK4llvm4User20getIntrusiveOperandsEv: # @_ZNK4llvm4User20getIntrusiveOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	%rdx, %rsi
	movl	20(%rdx), %eax
	andl	$268435455, %eax        # imm = 0xFFFFFFF
	movslq	%eax, %rdx
	subq	%rdx, %rcx
	imulq	$24, %rcx, %rcx
	addq	%rcx, %rsi
	movq	%rsi, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end150:
	.size	_ZNK4llvm4User20getIntrusiveOperandsEv, .Lfunc_end150-_ZNK4llvm4User20getIntrusiveOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm4Type9getTypeIDEv,"axG",@progbits,_ZNK4llvm4Type9getTypeIDEv,comdat
	.weak	_ZNK4llvm4Type9getTypeIDEv # -- Begin function _ZNK4llvm4Type9getTypeIDEv
	.p2align	4, 0x90
	.type	_ZNK4llvm4Type9getTypeIDEv,@function
_ZNK4llvm4Type9getTypeIDEv:             # @_ZNK4llvm4Type9getTypeIDEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %ecx
	andl	$255, %ecx
	movl	%ecx, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end151:
	.size	_ZNK4llvm4Type9getTypeIDEv, .Lfunc_end151-_ZNK4llvm4Type9getTypeIDEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm10BranchInst14getNumOperandsEv,"axG",@progbits,_ZNK4llvm10BranchInst14getNumOperandsEv,comdat
	.weak	_ZNK4llvm10BranchInst14getNumOperandsEv # -- Begin function _ZNK4llvm10BranchInst14getNumOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm10BranchInst14getNumOperandsEv,@function
_ZNK4llvm10BranchInst14getNumOperandsEv: # @_ZNK4llvm10BranchInst14getNumOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end152:
	.size	_ZNK4llvm10BranchInst14getNumOperandsEv, .Lfunc_end152-_ZNK4llvm10BranchInst14getNumOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE,"axG",@progbits,_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE,comdat
	.weak	_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE # -- Begin function _ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE
	.p2align	4, 0x90
	.type	_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE,@function
_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE: # @_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4User14getNumOperandsEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end153:
	.size	_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE, .Lfunc_end153-_ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.LBB154_3
# %bb.1:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
	testb	$1, %al
	jne	.LBB154_2
	jmp	.LBB154_3
.LBB154_2:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	movq	%rax, -16(%rbp)         # 8-byte Spill
	jmp	.LBB154_4
.LBB154_3:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -16(%rbp)         # 8-byte Spill
	jmp	.LBB154_4
.LBB154_4:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end154:
	.size	_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end154-_ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase16getCalledOperandEv,"axG",@progbits,_ZNK4llvm8CallBase16getCalledOperandEv,comdat
	.weak	_ZNK4llvm8CallBase16getCalledOperandEv # -- Begin function _ZNK4llvm8CallBase16getCalledOperandEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase16getCalledOperandEv,@function
_ZNK4llvm8CallBase16getCalledOperandEv: # @_ZNK4llvm8CallBase16getCalledOperandEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv
	movq	%rax, %rdi
	callq	_ZNK4llvm3UsecvPNS_5ValueEEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end155:
	.size	_ZNK4llvm8CallBase16getCalledOperandEv, .Lfunc_end155-_ZNK4llvm8CallBase16getCalledOperandEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB156_1
	jmp	.LBB156_2
.LBB156_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB156_2
.LBB156_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB156_3
	jmp	.LBB156_4
.LBB156_3:
	jmp	.LBB156_5
.LBB156_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB156_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end156:
	.size	_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end156-_ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end157:
	.size	_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_, .Lfunc_end157-_ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv,"axG",@progbits,_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv,comdat
	.weak	_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv # -- Begin function _ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv,@function
_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv: # @_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end158:
	.size	_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv, .Lfunc_end158-_ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_,"axG",@progbits,_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_,comdat
	.weak	_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_ # -- Begin function _ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_,@function
_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_: # @_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_
	addq	$-24, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end159:
	.size	_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_, .Lfunc_end159-_ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_,"axG",@progbits,_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_,comdat
	.weak	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_ # -- Begin function _ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_
	.p2align	4, 0x90
	.type	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_,@function
_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_: # @_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end160:
	.size	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_, .Lfunc_end160-_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase8arg_sizeEv,"axG",@progbits,_ZNK4llvm8CallBase8arg_sizeEv,comdat
	.weak	_ZNK4llvm8CallBase8arg_sizeEv # -- Begin function _ZNK4llvm8CallBase8arg_sizeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase8arg_sizeEv,@function
_ZNK4llvm8CallBase8arg_sizeEv:          # @_ZNK4llvm8CallBase8arg_sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase7arg_endEv
	movq	-16(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase9arg_beginEv
	movq	-24(%rbp), %rcx         # 8-byte Reload
	subq	%rax, %rcx
	movq	%rcx, %rax
	cqto
	movl	$24, %ecx
	idivq	%rcx
                                        # kill: def $eax killed $eax killed $rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end161:
	.size	_ZNK4llvm8CallBase8arg_sizeEv, .Lfunc_end161-_ZNK4llvm8CallBase8arg_sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase7arg_endEv,"axG",@progbits,_ZNK4llvm8CallBase7arg_endEv,comdat
	.weak	_ZNK4llvm8CallBase7arg_endEv # -- Begin function _ZNK4llvm8CallBase7arg_endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase7arg_endEv,@function
_ZNK4llvm8CallBase7arg_endEv:           # @_ZNK4llvm8CallBase7arg_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8CallBase7arg_endEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end162:
	.size	_ZNK4llvm8CallBase7arg_endEv, .Lfunc_end162-_ZNK4llvm8CallBase7arg_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase9arg_beginEv,"axG",@progbits,_ZNK4llvm8CallBase9arg_beginEv,comdat
	.weak	_ZNK4llvm8CallBase9arg_beginEv # -- Begin function _ZNK4llvm8CallBase9arg_beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase9arg_beginEv,@function
_ZNK4llvm8CallBase9arg_beginEv:         # @_ZNK4llvm8CallBase9arg_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8CallBase9arg_beginEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end163:
	.size	_ZNK4llvm8CallBase9arg_beginEv, .Lfunc_end163-_ZNK4llvm8CallBase9arg_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase7arg_endEv,"axG",@progbits,_ZN4llvm8CallBase7arg_endEv,comdat
	.weak	_ZN4llvm8CallBase7arg_endEv # -- Begin function _ZN4llvm8CallBase7arg_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase7arg_endEv,@function
_ZN4llvm8CallBase7arg_endEv:            # @_ZN4llvm8CallBase7arg_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm8CallBase17data_operands_endEv
	movq	-16(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movl	%eax, %eax
	movl	%eax, %esi
	subq	%rsi, %rdx
	imulq	$24, %rdx, %rdx
	movq	-24(%rbp), %rsi         # 8-byte Reload
	addq	%rdx, %rsi
	movq	%rsi, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end164:
	.size	_ZN4llvm8CallBase7arg_endEv, .Lfunc_end164-_ZN4llvm8CallBase7arg_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase17data_operands_endEv,"axG",@progbits,_ZN4llvm8CallBase17data_operands_endEv,comdat
	.weak	_ZN4llvm8CallBase17data_operands_endEv # -- Begin function _ZN4llvm8CallBase17data_operands_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase17data_operands_endEv,@function
_ZN4llvm8CallBase17data_operands_endEv: # @_ZN4llvm8CallBase17data_operands_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm8CallBase6op_endEv
	movq	-16(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movl	%eax, %eax
	movl	%eax, %esi
	subq	%rsi, %rdx
	imulq	$24, %rdx, %rdx
	movq	-24(%rbp), %rsi         # 8-byte Reload
	addq	%rdx, %rsi
	addq	$-24, %rsi
	movq	%rsi, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end165:
	.size	_ZN4llvm8CallBase17data_operands_endEv, .Lfunc_end165-_ZN4llvm8CallBase17data_operands_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase25getNumTotalBundleOperandsEv,"axG",@progbits,_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv,comdat
	.weak	_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv # -- Begin function _ZNK4llvm8CallBase25getNumTotalBundleOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv,@function
_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv: # @_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase17hasOperandBundlesEv
	testb	$1, %al
	jne	.LBB166_2
# %bb.1:
	movl	$0, -4(%rbp)
	jmp	.LBB166_8
.LBB166_2:
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv
	movl	%eax, -20(%rbp)
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	movl	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	movb	%cl, -33(%rbp)          # 1-byte Spill
	ja	.LBB166_4
# %bb.3:
	movb	$1, %al
	movb	%al, -33(%rbp)          # 1-byte Spill
	jmp	.LBB166_4
.LBB166_4:
	movb	-33(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB166_5
	jmp	.LBB166_6
.LBB166_5:
	jmp	.LBB166_7
.LBB166_6:
	movabsq	$.L.str.74, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$1808, %edx             # imm = 0x710
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getNumTotalBundleOperandsEv, %rcx
	callq	__assert_fail
.LBB166_7:
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
.LBB166_8:
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end166:
	.size	_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv, .Lfunc_end166-_ZNK4llvm8CallBase25getNumTotalBundleOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase6op_endEv,"axG",@progbits,_ZN4llvm8CallBase6op_endEv,comdat
	.weak	_ZN4llvm8CallBase6op_endEv # -- Begin function _ZN4llvm8CallBase6op_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase6op_endEv,@function
_ZN4llvm8CallBase6op_endEv:             # @_ZN4llvm8CallBase6op_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end167:
	.size	_ZN4llvm8CallBase6op_endEv, .Lfunc_end167-_ZN4llvm8CallBase6op_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv,"axG",@progbits,_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv,comdat
	.weak	_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv # -- Begin function _ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv,@function
_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv: # @_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	movl	%eax, %ecx
	subl	$5, %eax
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	je	.LBB168_2
	jmp	.LBB168_6
.LBB168_6:
	movl	-28(%rbp), %eax         # 4-byte Reload
	subl	$11, %eax
	je	.LBB168_3
	jmp	.LBB168_7
.LBB168_7:
	movl	-28(%rbp), %eax         # 4-byte Reload
	subl	$56, %eax
	jne	.LBB168_4
	jmp	.LBB168_1
.LBB168_1:
	movl	$0, -4(%rbp)
	jmp	.LBB168_5
.LBB168_2:
	movl	$2, -4(%rbp)
	jmp	.LBB168_5
.LBB168_3:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm8CallBase34getNumSubclassExtraOperandsDynamicEv
	movl	%eax, -4(%rbp)
	jmp	.LBB168_5
.LBB168_4:
	movabsq	$.L.str.71, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$1130, %edx             # imm = 0x46A
	callq	_ZN4llvm25llvm_unreachable_internalEPKcS1_j
.LBB168_5:
	movl	-4(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end168:
	.size	_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv, .Lfunc_end168-_ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase17hasOperandBundlesEv,"axG",@progbits,_ZNK4llvm8CallBase17hasOperandBundlesEv,comdat
	.weak	_ZNK4llvm8CallBase17hasOperandBundlesEv # -- Begin function _ZNK4llvm8CallBase17hasOperandBundlesEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase17hasOperandBundlesEv,@function
_ZNK4llvm8CallBase17hasOperandBundlesEv: # @_ZNK4llvm8CallBase17hasOperandBundlesEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm8CallBase20getNumOperandBundlesEv
	cmpl	$0, %eax
	setne	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end169:
	.size	_ZNK4llvm8CallBase17hasOperandBundlesEv, .Lfunc_end169-_ZNK4llvm8CallBase17hasOperandBundlesEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase27getBundleOperandsStartIndexEv,"axG",@progbits,_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv,comdat
	.weak	_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv # -- Begin function _ZNK4llvm8CallBase27getBundleOperandsStartIndexEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv,@function
_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv: # @_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase17hasOperandBundlesEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -17(%rbp)          # 1-byte Spill
	jne	.LBB170_1
	jmp	.LBB170_2
.LBB170_1:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB170_2
.LBB170_2:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB170_3
	jmp	.LBB170_4
.LBB170_3:
	jmp	.LBB170_5
.LBB170_4:
	movabsq	$.L.str.76, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$1773, %edx             # imm = 0x6ED
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase27getBundleOperandsStartIndexEv, %rcx
	callq	__assert_fail
.LBB170_5:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm8CallBase20bundle_op_info_beginEv
	movl	8(%rax), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end170:
	.size	_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv, .Lfunc_end170-_ZNK4llvm8CallBase27getBundleOperandsStartIndexEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase25getBundleOperandsEndIndexEv,"axG",@progbits,_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv,comdat
	.weak	_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv # -- Begin function _ZNK4llvm8CallBase25getBundleOperandsEndIndexEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv,@function
_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv: # @_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase17hasOperandBundlesEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -17(%rbp)          # 1-byte Spill
	jne	.LBB171_1
	jmp	.LBB171_2
.LBB171_1:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB171_2
.LBB171_2:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB171_3
	jmp	.LBB171_4
.LBB171_3:
	jmp	.LBB171_5
.LBB171_4:
	movabsq	$.L.str.76, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$1779, %edx             # imm = 0x6F3
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getBundleOperandsEndIndexEv, %rcx
	callq	__assert_fail
.LBB171_5:
	movq	-16(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm8CallBase18bundle_op_info_endEv
	movl	-4(%rax), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end171:
	.size	_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv, .Lfunc_end171-_ZNK4llvm8CallBase25getBundleOperandsEndIndexEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase20getNumOperandBundlesEv,"axG",@progbits,_ZNK4llvm8CallBase20getNumOperandBundlesEv,comdat
	.weak	_ZNK4llvm8CallBase20getNumOperandBundlesEv # -- Begin function _ZNK4llvm8CallBase20getNumOperandBundlesEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase20getNumOperandBundlesEv,@function
_ZNK4llvm8CallBase20getNumOperandBundlesEv: # @_ZNK4llvm8CallBase20getNumOperandBundlesEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase20bundle_op_info_beginEv
	movq	-16(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase18bundle_op_info_endEv
	movq	-24(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_
                                        # kill: def $eax killed $eax killed $rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end172:
	.size	_ZNK4llvm8CallBase20getNumOperandBundlesEv, .Lfunc_end172-_ZNK4llvm8CallBase20getNumOperandBundlesEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_,"axG",@progbits,_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_,comdat
	.weak	_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_ # -- Begin function _ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_
	.p2align	4, 0x90
	.type	_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_,@function
_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_: # @_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	leaq	-8(%rbp), %rax
	movq	%rdi, -40(%rbp)         # 8-byte Spill
	movq	%rax, %rdi
	movq	%rsi, -48(%rbp)         # 8-byte Spill
	callq	_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_
	movq	-40(%rbp), %rdi         # 8-byte Reload
	movq	-48(%rbp), %rsi         # 8-byte Reload
	callq	_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end173:
	.size	_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_, .Lfunc_end173-_ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase20bundle_op_info_beginEv,"axG",@progbits,_ZNK4llvm8CallBase20bundle_op_info_beginEv,comdat
	.weak	_ZNK4llvm8CallBase20bundle_op_info_beginEv # -- Begin function _ZNK4llvm8CallBase20bundle_op_info_beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase20bundle_op_info_beginEv,@function
_ZNK4llvm8CallBase20bundle_op_info_beginEv: # @_ZNK4llvm8CallBase20bundle_op_info_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_ZN4llvm8CallBase20bundle_op_info_beginEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end174:
	.size	_ZNK4llvm8CallBase20bundle_op_info_beginEv, .Lfunc_end174-_ZNK4llvm8CallBase20bundle_op_info_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase18bundle_op_info_endEv,"axG",@progbits,_ZNK4llvm8CallBase18bundle_op_info_endEv,comdat
	.weak	_ZNK4llvm8CallBase18bundle_op_info_endEv # -- Begin function _ZNK4llvm8CallBase18bundle_op_info_endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase18bundle_op_info_endEv,@function
_ZNK4llvm8CallBase18bundle_op_info_endEv: # @_ZNK4llvm8CallBase18bundle_op_info_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_ZN4llvm8CallBase18bundle_op_info_endEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end175:
	.size	_ZNK4llvm8CallBase18bundle_op_info_endEv, .Lfunc_end175-_ZNK4llvm8CallBase18bundle_op_info_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag,"axG",@progbits,_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag,comdat
	.weak	_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag # -- Begin function _ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag
	.p2align	4, 0x90
	.type	_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag,@function
_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag: # @_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rcx
	subq	%rcx, %rax
	sarq	$4, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end176:
	.size	_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag, .Lfunc_end176-_ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_,"axG",@progbits,_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_,comdat
	.weak	_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_ # -- Begin function _ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_
	.p2align	4, 0x90
	.type	_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_,@function
_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_: # @_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end177:
	.size	_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_, .Lfunc_end177-_ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase20bundle_op_info_beginEv,"axG",@progbits,_ZN4llvm8CallBase20bundle_op_info_beginEv,comdat
	.weak	_ZN4llvm8CallBase20bundle_op_info_beginEv # -- Begin function _ZN4llvm8CallBase20bundle_op_info_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase20bundle_op_info_beginEv,@function
_ZN4llvm8CallBase20bundle_op_info_beginEv: # @_ZN4llvm8CallBase20bundle_op_info_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase13hasDescriptorEv
	testb	$1, %al
	jne	.LBB178_2
# %bb.1:
	movq	$0, -8(%rbp)
	jmp	.LBB178_3
.LBB178_2:
	movq	-48(%rbp), %rax         # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZN4llvm4User13getDescriptorEv
	movq	%rax, -40(%rbp)
	movq	%rdx, -32(%rbp)
	leaq	-40(%rbp), %rdi
	callq	_ZNK4llvm15MutableArrayRefIhE5beginEv
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
.LBB178_3:
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end178:
	.size	_ZN4llvm8CallBase20bundle_op_info_beginEv, .Lfunc_end178-_ZN4llvm8CallBase20bundle_op_info_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase13hasDescriptorEv,"axG",@progbits,_ZNK4llvm8CallBase13hasDescriptorEv,comdat
	.weak	_ZNK4llvm8CallBase13hasDescriptorEv # -- Begin function _ZNK4llvm8CallBase13hasDescriptorEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase13hasDescriptorEv,@function
_ZNK4llvm8CallBase13hasDescriptorEv:    # @_ZNK4llvm8CallBase13hasDescriptorEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	20(%rax), %ecx
	shrl	$31, %ecx
	cmpl	$0, %ecx
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end179:
	.size	_ZNK4llvm8CallBase13hasDescriptorEv, .Lfunc_end179-_ZNK4llvm8CallBase13hasDescriptorEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm15MutableArrayRefIhE5beginEv,"axG",@progbits,_ZNK4llvm15MutableArrayRefIhE5beginEv,comdat
	.weak	_ZNK4llvm15MutableArrayRefIhE5beginEv # -- Begin function _ZNK4llvm15MutableArrayRefIhE5beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm15MutableArrayRefIhE5beginEv,@function
_ZNK4llvm15MutableArrayRefIhE5beginEv:  # @_ZNK4llvm15MutableArrayRefIhE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm15MutableArrayRefIhE4dataEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end180:
	.size	_ZNK4llvm15MutableArrayRefIhE5beginEv, .Lfunc_end180-_ZNK4llvm15MutableArrayRefIhE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm15MutableArrayRefIhE4dataEv,"axG",@progbits,_ZNK4llvm15MutableArrayRefIhE4dataEv,comdat
	.weak	_ZNK4llvm15MutableArrayRefIhE4dataEv # -- Begin function _ZNK4llvm15MutableArrayRefIhE4dataEv
	.p2align	4, 0x90
	.type	_ZNK4llvm15MutableArrayRefIhE4dataEv,@function
_ZNK4llvm15MutableArrayRefIhE4dataEv:   # @_ZNK4llvm15MutableArrayRefIhE4dataEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm8ArrayRefIhE4dataEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end181:
	.size	_ZNK4llvm15MutableArrayRefIhE4dataEv, .Lfunc_end181-_ZNK4llvm15MutableArrayRefIhE4dataEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8ArrayRefIhE4dataEv,"axG",@progbits,_ZNK4llvm8ArrayRefIhE4dataEv,comdat
	.weak	_ZNK4llvm8ArrayRefIhE4dataEv # -- Begin function _ZNK4llvm8ArrayRefIhE4dataEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8ArrayRefIhE4dataEv,@function
_ZNK4llvm8ArrayRefIhE4dataEv:           # @_ZNK4llvm8ArrayRefIhE4dataEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end182:
	.size	_ZNK4llvm8ArrayRefIhE4dataEv, .Lfunc_end182-_ZNK4llvm8ArrayRefIhE4dataEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase18bundle_op_info_endEv,"axG",@progbits,_ZN4llvm8CallBase18bundle_op_info_endEv,comdat
	.weak	_ZN4llvm8CallBase18bundle_op_info_endEv # -- Begin function _ZN4llvm8CallBase18bundle_op_info_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase18bundle_op_info_endEv,@function
_ZN4llvm8CallBase18bundle_op_info_endEv: # @_ZN4llvm8CallBase18bundle_op_info_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8CallBase13hasDescriptorEv
	testb	$1, %al
	jne	.LBB183_2
# %bb.1:
	movq	$0, -8(%rbp)
	jmp	.LBB183_3
.LBB183_2:
	movq	-48(%rbp), %rax         # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZN4llvm4User13getDescriptorEv
	movq	%rax, -40(%rbp)
	movq	%rdx, -32(%rbp)
	leaq	-40(%rbp), %rdi
	callq	_ZNK4llvm15MutableArrayRefIhE3endEv
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
.LBB183_3:
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end183:
	.size	_ZN4llvm8CallBase18bundle_op_info_endEv, .Lfunc_end183-_ZN4llvm8CallBase18bundle_op_info_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm15MutableArrayRefIhE3endEv,"axG",@progbits,_ZNK4llvm15MutableArrayRefIhE3endEv,comdat
	.weak	_ZNK4llvm15MutableArrayRefIhE3endEv # -- Begin function _ZNK4llvm15MutableArrayRefIhE3endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm15MutableArrayRefIhE3endEv,@function
_ZNK4llvm15MutableArrayRefIhE3endEv:    # @_ZNK4llvm15MutableArrayRefIhE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm15MutableArrayRefIhE4dataEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rcx, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm8ArrayRefIhE4sizeEv
	movq	-24(%rbp), %rcx         # 8-byte Reload
	addq	%rax, %rcx
	movq	%rcx, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end184:
	.size	_ZNK4llvm15MutableArrayRefIhE3endEv, .Lfunc_end184-_ZNK4llvm15MutableArrayRefIhE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8ArrayRefIhE4sizeEv,"axG",@progbits,_ZNK4llvm8ArrayRefIhE4sizeEv,comdat
	.weak	_ZNK4llvm8ArrayRefIhE4sizeEv # -- Begin function _ZNK4llvm8ArrayRefIhE4sizeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm8ArrayRefIhE4sizeEv,@function
_ZNK4llvm8ArrayRefIhE4sizeEv:           # @_ZNK4llvm8ArrayRefIhE4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end185:
	.size	_ZNK4llvm8ArrayRefIhE4sizeEv, .Lfunc_end185-_ZNK4llvm8ArrayRefIhE4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase9arg_beginEv,"axG",@progbits,_ZN4llvm8CallBase9arg_beginEv,comdat
	.weak	_ZN4llvm8CallBase9arg_beginEv # -- Begin function _ZN4llvm8CallBase9arg_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase9arg_beginEv,@function
_ZN4llvm8CallBase9arg_beginEv:          # @_ZN4llvm8CallBase9arg_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8CallBase8op_beginEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end186:
	.size	_ZN4llvm8CallBase9arg_beginEv, .Lfunc_end186-_ZN4llvm8CallBase9arg_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallBase8op_beginEv,"axG",@progbits,_ZN4llvm8CallBase8op_beginEv,comdat
	.weak	_ZN4llvm8CallBase8op_beginEv # -- Begin function _ZN4llvm8CallBase8op_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm8CallBase8op_beginEv,@function
_ZN4llvm8CallBase8op_beginEv:           # @_ZN4llvm8CallBase8op_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end187:
	.size	_ZN4llvm8CallBase8op_beginEv, .Lfunc_end187-_ZN4llvm8CallBase8op_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_,"axG",@progbits,_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_,comdat
	.weak	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_ # -- Begin function _ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_
	.p2align	4, 0x90
	.type	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_,@function
_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_: # @_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-8(%rbp), %rcx
	movq	%rcx, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm4User14getNumOperandsEv
	xorl	%edx, %edx
	movl	%edx, %ecx
	movl	%eax, %eax
	movl	%eax, %esi
	subq	%rsi, %rcx
	imulq	$24, %rcx, %rcx
	movq	-16(%rbp), %rsi         # 8-byte Reload
	addq	%rcx, %rsi
	movq	%rsi, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end188:
	.size	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_, .Lfunc_end188-_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm8CallBase10getOperandEj,"axG",@progbits,_ZNK4llvm8CallBase10getOperandEj,comdat
	.weak	_ZNK4llvm8CallBase10getOperandEj # -- Begin function _ZNK4llvm8CallBase10getOperandEj
	.p2align	4, 0x90
	.type	_ZNK4llvm8CallBase10getOperandEj,@function
_ZNK4llvm8CallBase10getOperandEj:       # @_ZNK4llvm8CallBase10getOperandEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movq	%rax, %rdx
	movq	%rdx, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	callq	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	movl	-28(%rbp), %esi         # 4-byte Reload
	cmpl	%eax, %esi
	movb	%cl, -29(%rbp)          # 1-byte Spill
	jae	.LBB189_2
# %bb.1:
	movb	$1, %al
	movb	%al, -29(%rbp)          # 1-byte Spill
	jmp	.LBB189_2
.LBB189_2:
	movb	-29(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB189_3
	jmp	.LBB189_4
.LBB189_3:
	jmp	.LBB189_5
.LBB189_4:
	movabsq	$.L.str.79, %rdi
	movabsq	$.L.str.72, %rsi
	movl	$2154, %edx             # imm = 0x86A
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase10getOperandEj, %rcx
	callq	__assert_fail
.LBB189_5:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_
	movl	-12(%rbp), %ecx
	movl	%ecx, %edx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm3Use3getEv
	movq	%rax, %rdi
	callq	_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end189:
	.size	_ZNK4llvm8CallBase10getOperandEj, .Lfunc_end189-_ZNK4llvm8CallBase10getOperandEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE,"axG",@progbits,_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE,comdat
	.weak	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE # -- Begin function _ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE
	.p2align	4, 0x90
	.type	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE,@function
_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE: # @_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4User14getNumOperandsEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end190:
	.size	_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE, .Lfunc_end190-_ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,"axG",@progbits,_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,comdat
	.weak	_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_ # -- Begin function _ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.p2align	4, 0x90
	.type	_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,@function
_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_: # @_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	cmpq	$0, -16(%rbp)
	jne	.LBB191_2
# %bb.1:
	movq	$0, -8(%rbp)
	jmp	.LBB191_8
.LBB191_2:
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -17(%rbp)          # 1-byte Spill
	jne	.LBB191_3
	jmp	.LBB191_4
.LBB191_3:
	movb	$1, %al
	movb	%al, -17(%rbp)          # 1-byte Spill
	jmp	.LBB191_4
.LBB191_4:
	movb	-17(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB191_5
	jmp	.LBB191_6
.LBB191_5:
	jmp	.LBB191_7
.LBB191_6:
	movabsq	$.L.str.81, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$308, %edx              # imm = 0x134
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_, %rcx
	callq	__assert_fail
.LBB191_7:
	movq	-16(%rbp), %rdi
	callq	_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	movq	%rax, -8(%rbp)
.LBB191_8:
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end191:
	.size	_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_, .Lfunc_end191-_ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm3Use3getEv,"axG",@progbits,_ZNK4llvm3Use3getEv,comdat
	.weak	_ZNK4llvm3Use3getEv     # -- Begin function _ZNK4llvm3Use3getEv
	.p2align	4, 0x90
	.type	_ZNK4llvm3Use3getEv,@function
_ZNK4llvm3Use3getEv:                    # @_ZNK4llvm3Use3getEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end192:
	.size	_ZNK4llvm3Use3getEv, .Lfunc_end192-_ZNK4llvm3Use3getEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_ # -- Begin function _ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_,@function
_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_:    # @_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end193:
	.size	_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_, .Lfunc_end193-_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,"axG",@progbits,_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,comdat
	.weak	_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_ # -- Begin function _ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,@function
_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_: # @_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB194_1
	jmp	.LBB194_2
.LBB194_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB194_2
.LBB194_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB194_3
	jmp	.LBB194_4
.LBB194_3:
	jmp	.LBB194_5
.LBB194_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_, %rcx
	callq	__assert_fail
.LBB194_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end194:
	.size	_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_, .Lfunc_end194-_ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_,@function
_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_: # @_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end195:
	.size	_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_, .Lfunc_end195-_ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_,@function
_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_: # @_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end196:
	.size	_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_, .Lfunc_end196-_ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_,"axG",@progbits,_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_,comdat
	.weak	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_ # -- Begin function _ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_,@function
_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_: # @_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_
	movq	(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end197:
	.size	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_, .Lfunc_end197-_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_ # -- Begin function _ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_,@function
_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_: # @_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB198_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB198_2
.LBB198_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB198_3
	jmp	.LBB198_4
.LBB198_3:
	jmp	.LBB198_5
.LBB198_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_, %rcx
	callq	__assert_fail
.LBB198_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end198:
	.size	_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_, .Lfunc_end198-_ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_,"axG",@progbits,_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_,comdat
	.weak	_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_ # -- Begin function _ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_,@function
_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_: # @_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movb	$1, %al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end199:
	.size	_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_, .Lfunc_end199-_ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_,"axG",@progbits,_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_,comdat
	.weak	_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_ # -- Begin function _ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_,@function
_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_: # @_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end200:
	.size	_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_, .Lfunc_end200-_ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_ # -- Begin function _ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_,@function
_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_: # @_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end201:
	.size	_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_, .Lfunc_end201-_ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE,"axG",@progbits,_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE,comdat
	.weak	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE # -- Begin function _ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE
	.p2align	4, 0x90
	.type	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE,@function
_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE: # @_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	$2, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end202:
	.size	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE, .Lfunc_end202-_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_,"axG",@progbits,_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_,comdat
	.weak	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_ # -- Begin function _ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_
	.p2align	4, 0x90
	.type	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_,@function
_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_: # @_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$-48, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end203:
	.size	_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_, .Lfunc_end203-_ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4User8op_beginEv,"axG",@progbits,_ZN4llvm4User8op_beginEv,comdat
	.weak	_ZN4llvm4User8op_beginEv # -- Begin function _ZN4llvm4User8op_beginEv
	.p2align	4, 0x90
	.type	_ZN4llvm4User8op_beginEv,@function
_ZN4llvm4User8op_beginEv:               # @_ZN4llvm4User8op_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm4User14getOperandListEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end204:
	.size	_ZN4llvm4User8op_beginEv, .Lfunc_end204-_ZN4llvm4User8op_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4User6op_endEv,"axG",@progbits,_ZN4llvm4User6op_endEv,comdat
	.weak	_ZN4llvm4User6op_endEv  # -- Begin function _ZN4llvm4User6op_endEv
	.p2align	4, 0x90
	.type	_ZN4llvm4User6op_endEv,@function
_ZN4llvm4User6op_endEv:                 # @_ZN4llvm4User6op_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZN4llvm4User14getOperandListEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movl	20(%rcx), %edx
	andl	$268435455, %edx        # imm = 0xFFFFFFF
	movslq	%edx, %rsi
	imulq	$24, %rsi, %rsi
	addq	%rsi, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end205:
	.size	_ZN4llvm4User6op_endEv, .Lfunc_end205-_ZN4llvm4User6op_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_,"axG",@progbits,_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_,comdat
	.weak	_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_ # -- Begin function _ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_
	.p2align	4, 0x90
	.type	_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_,@function
_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_: # @_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	leaq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	leaq	-24(%rbp), %rdi
	callq	_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, 8(%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end206:
	.size	_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_, .Lfunc_end206-_ZN4llvm14iterator_rangeIPNS_3UseEEC2ES2_S2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4User14getOperandListEv,"axG",@progbits,_ZN4llvm4User14getOperandListEv,comdat
	.weak	_ZN4llvm4User14getOperandListEv # -- Begin function _ZN4llvm4User14getOperandListEv
	.p2align	4, 0x90
	.type	_ZN4llvm4User14getOperandListEv,@function
_ZN4llvm4User14getOperandListEv:        # @_ZN4llvm4User14getOperandListEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4User14getOperandListEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end207:
	.size	_ZN4llvm4User14getOperandListEv, .Lfunc_end207-_ZN4llvm4User14getOperandListEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_,"axG",@progbits,_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_,comdat
	.weak	_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_ # -- Begin function _ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_
	.p2align	4, 0x90
	.type	_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_,@function
_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_: # @_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end208:
	.size	_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_, .Lfunc_end208-_ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB209_1
	jmp	.LBB209_2
.LBB209_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB209_2
.LBB209_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB209_3
	jmp	.LBB209_4
.LBB209_3:
	jmp	.LBB209_5
.LBB209_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB209_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end209:
	.size	_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end209-_ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_,@function
_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_: # @_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end210:
	.size	_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_, .Lfunc_end210-_ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end211:
	.size	_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_, .Lfunc_end211-_ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end212:
	.size	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_, .Lfunc_end212-_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end213:
	.size	_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_, .Lfunc_end213-_ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_,"axG",@progbits,_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_,comdat
	.weak	_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_ # -- Begin function _ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_,@function
_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_: # @_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_
	movq	(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end214:
	.size	_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_, .Lfunc_end214-_ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB215_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB215_2
.LBB215_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB215_3
	jmp	.LBB215_4
.LBB215_3:
	jmp	.LBB215_5
.LBB215_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_, %rcx
	callq	__assert_fail
.LBB215_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end215:
	.size	_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_, .Lfunc_end215-_ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm11IntegerType7classofEPKNS_4TypeE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end216:
	.size	_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_, .Lfunc_end216-_ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11IntegerType7classofEPKNS_4TypeE,"axG",@progbits,_ZN4llvm11IntegerType7classofEPKNS_4TypeE,comdat
	.weak	_ZN4llvm11IntegerType7classofEPKNS_4TypeE # -- Begin function _ZN4llvm11IntegerType7classofEPKNS_4TypeE
	.p2align	4, 0x90
	.type	_ZN4llvm11IntegerType7classofEPKNS_4TypeE,@function
_ZN4llvm11IntegerType7classofEPKNS_4TypeE: # @_ZN4llvm11IntegerType7classofEPKNS_4TypeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4Type9getTypeIDEv
	cmpl	$11, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end217:
	.size	_ZN4llvm11IntegerType7classofEPKNS_4TypeE, .Lfunc_end217-_ZN4llvm11IntegerType7classofEPKNS_4TypeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_,"axG",@progbits,_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_,comdat
	.weak	_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_ # -- Begin function _ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_,@function
_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_: # @_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end218:
	.size	_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_, .Lfunc_end218-_ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt12getSExtValueEv,"axG",@progbits,_ZNK4llvm5APInt12getSExtValueEv,comdat
	.weak	_ZNK4llvm5APInt12getSExtValueEv # -- Begin function _ZNK4llvm5APInt12getSExtValueEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt12getSExtValueEv,@function
_ZNK4llvm5APInt12getSExtValueEv:        # @_ZNK4llvm5APInt12getSExtValueEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5APInt12isSingleWordEv
	testb	$1, %al
	jne	.LBB219_1
	jmp	.LBB219_2
.LBB219_1:
	movq	-24(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rdi
	movl	8(%rax), %esi
	callq	_ZN4llvm12SignExtend64Emj
	movq	%rax, -8(%rbp)
	jmp	.LBB219_8
.LBB219_2:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5APInt16getMinSignedBitsEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	cmpl	$64, %eax
	movb	%cl, -25(%rbp)          # 1-byte Spill
	ja	.LBB219_4
# %bb.3:
	movb	$1, %al
	movb	%al, -25(%rbp)          # 1-byte Spill
	jmp	.LBB219_4
.LBB219_4:
	movb	-25(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB219_5
	jmp	.LBB219_6
.LBB219_5:
	jmp	.LBB219_7
.LBB219_6:
	movabsq	$.L.str.84, %rdi
	movabsq	$.L.str.85, %rsi
	movl	$1635, %edx             # imm = 0x663
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm5APInt12getSExtValueEv, %rcx
	callq	__assert_fail
.LBB219_7:
	movq	-24(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
.LBB219_8:
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end219:
	.size	_ZNK4llvm5APInt12getSExtValueEv, .Lfunc_end219-_ZNK4llvm5APInt12getSExtValueEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt12isSingleWordEv,"axG",@progbits,_ZNK4llvm5APInt12isSingleWordEv,comdat
	.weak	_ZNK4llvm5APInt12isSingleWordEv # -- Begin function _ZNK4llvm5APInt12isSingleWordEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt12isSingleWordEv,@function
_ZNK4llvm5APInt12isSingleWordEv:        # @_ZNK4llvm5APInt12isSingleWordEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	cmpl	$64, 8(%rax)
	setbe	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end220:
	.size	_ZNK4llvm5APInt12isSingleWordEv, .Lfunc_end220-_ZNK4llvm5APInt12isSingleWordEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12SignExtend64Emj,"axG",@progbits,_ZN4llvm12SignExtend64Emj,comdat
	.weak	_ZN4llvm12SignExtend64Emj # -- Begin function _ZN4llvm12SignExtend64Emj
	.p2align	4, 0x90
	.type	_ZN4llvm12SignExtend64Emj,@function
_ZN4llvm12SignExtend64Emj:              # @_ZN4llvm12SignExtend64Emj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	cmpl	$0, -12(%rbp)
	movb	%al, -13(%rbp)          # 1-byte Spill
	jbe	.LBB221_2
# %bb.1:
	movb	$1, %al
	movb	%al, -13(%rbp)          # 1-byte Spill
	jmp	.LBB221_2
.LBB221_2:
	movb	-13(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB221_3
	jmp	.LBB221_4
.LBB221_3:
	jmp	.LBB221_5
.LBB221_4:
	movabsq	$.L.str.87, %rdi
	movabsq	$.L.str.88, %rsi
	movl	$775, %edx              # imm = 0x307
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm12SignExtend64Emj, %rcx
	callq	__assert_fail
.LBB221_5:
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	cmpl	$64, -12(%rbp)
	movb	%al, -14(%rbp)          # 1-byte Spill
	ja	.LBB221_7
# %bb.6:
	movb	$1, %al
	movb	%al, -14(%rbp)          # 1-byte Spill
	jmp	.LBB221_7
.LBB221_7:
	movb	-14(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB221_8
	jmp	.LBB221_9
.LBB221_8:
	jmp	.LBB221_10
.LBB221_9:
	movabsq	$.L.str.90, %rdi
	movabsq	$.L.str.88, %rsi
	movl	$776, %edx              # imm = 0x308
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm12SignExtend64Emj, %rcx
	callq	__assert_fail
.LBB221_10:
	movq	-8(%rbp), %rax
	movl	$64, %ecx
	movl	%ecx, %edx
	subl	-12(%rbp), %edx
	movl	%edx, %edx
	movl	%edx, %esi
	movl	%ecx, -20(%rbp)         # 4-byte Spill
	movq	%rsi, %rcx
                                        # kill: def $cl killed $rcx
	shlq	%cl, %rax
	movl	-20(%rbp), %edx         # 4-byte Reload
	subl	-12(%rbp), %edx
	movl	%edx, %edx
	movl	%edx, %ecx
                                        # kill: def $cl killed $rcx
	sarq	%cl, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end221:
	.size	_ZN4llvm12SignExtend64Emj, .Lfunc_end221-_ZN4llvm12SignExtend64Emj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt16getMinSignedBitsEv,"axG",@progbits,_ZNK4llvm5APInt16getMinSignedBitsEv,comdat
	.weak	_ZNK4llvm5APInt16getMinSignedBitsEv # -- Begin function _ZNK4llvm5APInt16getMinSignedBitsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt16getMinSignedBitsEv,@function
_ZNK4llvm5APInt16getMinSignedBitsEv:    # @_ZNK4llvm5APInt16getMinSignedBitsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5APInt10isNegativeEv
	testb	$1, %al
	jne	.LBB222_1
	jmp	.LBB222_2
.LBB222_1:
	movq	-24(%rbp), %rax         # 8-byte Reload
	movl	8(%rax), %ecx
	movq	%rax, %rdi
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	callq	_ZNK4llvm5APInt16countLeadingOnesEv
	movl	-28(%rbp), %ecx         # 4-byte Reload
	subl	%eax, %ecx
	addl	$1, %ecx
	movl	%ecx, -4(%rbp)
	jmp	.LBB222_3
.LBB222_2:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5APInt13getActiveBitsEv
	addl	$1, %eax
	movl	%eax, -4(%rbp)
.LBB222_3:
	movl	-4(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end222:
	.size	_ZNK4llvm5APInt16getMinSignedBitsEv, .Lfunc_end222-_ZNK4llvm5APInt16getMinSignedBitsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt10isNegativeEv,"axG",@progbits,_ZNK4llvm5APInt10isNegativeEv,comdat
	.weak	_ZNK4llvm5APInt10isNegativeEv # -- Begin function _ZNK4llvm5APInt10isNegativeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt10isNegativeEv,@function
_ZNK4llvm5APInt10isNegativeEv:          # @_ZNK4llvm5APInt10isNegativeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %ecx
	subl	$1, %ecx
	movq	%rax, %rdi
	movl	%ecx, %esi
	callq	_ZNK4llvm5APIntixEj
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end223:
	.size	_ZNK4llvm5APInt10isNegativeEv, .Lfunc_end223-_ZNK4llvm5APInt10isNegativeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt16countLeadingOnesEv,"axG",@progbits,_ZNK4llvm5APInt16countLeadingOnesEv,comdat
	.weak	_ZNK4llvm5APInt16countLeadingOnesEv # -- Begin function _ZNK4llvm5APInt16countLeadingOnesEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt16countLeadingOnesEv,@function
_ZNK4llvm5APInt16countLeadingOnesEv:    # @_ZNK4llvm5APInt16countLeadingOnesEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5APInt12isSingleWordEv
	testb	$1, %al
	jne	.LBB224_1
	jmp	.LBB224_2
.LBB224_1:
	movq	-24(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rcx
	movl	$64, %edx
	subl	8(%rax), %edx
	movl	%edx, %edx
	movl	%edx, %esi
	movq	%rcx, -32(%rbp)         # 8-byte Spill
	movq	%rsi, %rcx
                                        # kill: def $cl killed $rcx
	movq	-32(%rbp), %rsi         # 8-byte Reload
	shlq	%cl, %rsi
	movq	%rsi, %rdi
	movl	$2, %esi
	callq	_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE
	movl	%eax, -4(%rbp)
	jmp	.LBB224_3
.LBB224_2:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5APInt24countLeadingOnesSlowCaseEv
	movl	%eax, -4(%rbp)
.LBB224_3:
	movl	-4(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end224:
	.size	_ZNK4llvm5APInt16countLeadingOnesEv, .Lfunc_end224-_ZNK4llvm5APInt16countLeadingOnesEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt13getActiveBitsEv,"axG",@progbits,_ZNK4llvm5APInt13getActiveBitsEv,comdat
	.weak	_ZNK4llvm5APInt13getActiveBitsEv # -- Begin function _ZNK4llvm5APInt13getActiveBitsEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt13getActiveBitsEv,@function
_ZNK4llvm5APInt13getActiveBitsEv:       # @_ZNK4llvm5APInt13getActiveBitsEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %ecx
	movq	%rax, %rdi
	movl	%ecx, -12(%rbp)         # 4-byte Spill
	callq	_ZNK4llvm5APInt17countLeadingZerosEv
	movl	-12(%rbp), %ecx         # 4-byte Reload
	subl	%eax, %ecx
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end225:
	.size	_ZNK4llvm5APInt13getActiveBitsEv, .Lfunc_end225-_ZNK4llvm5APInt13getActiveBitsEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APIntixEj,"axG",@progbits,_ZNK4llvm5APIntixEj,comdat
	.weak	_ZNK4llvm5APIntixEj     # -- Begin function _ZNK4llvm5APIntixEj
	.p2align	4, 0x90
	.type	_ZNK4llvm5APIntixEj,@function
_ZNK4llvm5APIntixEj:                    # @_ZNK4llvm5APIntixEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	movl	%ecx, -28(%rbp)         # 4-byte Spill
	callq	_ZNK4llvm5APInt11getBitWidthEv
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	movl	-28(%rbp), %edx         # 4-byte Reload
	cmpl	%eax, %edx
	movb	%cl, -29(%rbp)          # 1-byte Spill
	jae	.LBB226_2
# %bb.1:
	movb	$1, %al
	movb	%al, -29(%rbp)          # 1-byte Spill
	jmp	.LBB226_2
.LBB226_2:
	movb	-29(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB226_3
	jmp	.LBB226_4
.LBB226_3:
	jmp	.LBB226_5
.LBB226_4:
	movabsq	$.L.str.92, %rdi
	movabsq	$.L.str.85, %rsi
	movl	$1138, %edx             # imm = 0x472
	movabsq	$.L__PRETTY_FUNCTION__._ZNK4llvm5APIntixEj, %rcx
	callq	__assert_fail
.LBB226_5:
	movl	-12(%rbp), %edi
	callq	_ZN4llvm5APInt7maskBitEj
	movl	-12(%rbp), %esi
	movq	-24(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -40(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5APInt7getWordEj
	movq	-40(%rbp), %rcx         # 8-byte Reload
	andq	%rax, %rcx
	cmpq	$0, %rcx
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end226:
	.size	_ZNK4llvm5APIntixEj, .Lfunc_end226-_ZNK4llvm5APIntixEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt11getBitWidthEv,"axG",@progbits,_ZNK4llvm5APInt11getBitWidthEv,comdat
	.weak	_ZNK4llvm5APInt11getBitWidthEv # -- Begin function _ZNK4llvm5APInt11getBitWidthEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt11getBitWidthEv,@function
_ZNK4llvm5APInt11getBitWidthEv:         # @_ZNK4llvm5APInt11getBitWidthEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end227:
	.size	_ZNK4llvm5APInt11getBitWidthEv, .Lfunc_end227-_ZNK4llvm5APInt11getBitWidthEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5APInt7maskBitEj,"axG",@progbits,_ZN4llvm5APInt7maskBitEj,comdat
	.weak	_ZN4llvm5APInt7maskBitEj # -- Begin function _ZN4llvm5APInt7maskBitEj
	.p2align	4, 0x90
	.type	_ZN4llvm5APInt7maskBitEj,@function
_ZN4llvm5APInt7maskBitEj:               # @_ZN4llvm5APInt7maskBitEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %edi
	callq	_ZN4llvm5APInt8whichBitEj
	movl	%eax, %eax
	movl	%eax, %ecx
                                        # kill: def $cl killed $rcx
	movl	$1, %edx
	shlq	%cl, %rdx
	movq	%rdx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end228:
	.size	_ZN4llvm5APInt7maskBitEj, .Lfunc_end228-_ZN4llvm5APInt7maskBitEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt7getWordEj,"axG",@progbits,_ZNK4llvm5APInt7getWordEj,comdat
	.weak	_ZNK4llvm5APInt7getWordEj # -- Begin function _ZNK4llvm5APInt7getWordEj
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt7getWordEj,@function
_ZNK4llvm5APInt7getWordEj:              # @_ZNK4llvm5APInt7getWordEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5APInt12isSingleWordEv
	testb	$1, %al
	jne	.LBB229_1
	jmp	.LBB229_2
.LBB229_1:
	movq	-24(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rcx
	movq	%rcx, -32(%rbp)         # 8-byte Spill
	jmp	.LBB229_3
.LBB229_2:
	movq	-24(%rbp), %rax         # 8-byte Reload
	movq	(%rax), %rcx
	movl	-12(%rbp), %edi
	movq	%rcx, -40(%rbp)         # 8-byte Spill
	callq	_ZN4llvm5APInt9whichWordEj
	movl	%eax, %eax
	movl	%eax, %ecx
	movq	-40(%rbp), %rdx         # 8-byte Reload
	movq	(%rdx,%rcx,8), %rcx
	movq	%rcx, -32(%rbp)         # 8-byte Spill
.LBB229_3:
	movq	-32(%rbp), %rax         # 8-byte Reload
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end229:
	.size	_ZNK4llvm5APInt7getWordEj, .Lfunc_end229-_ZNK4llvm5APInt7getWordEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5APInt8whichBitEj,"axG",@progbits,_ZN4llvm5APInt8whichBitEj,comdat
	.weak	_ZN4llvm5APInt8whichBitEj # -- Begin function _ZN4llvm5APInt8whichBitEj
	.p2align	4, 0x90
	.type	_ZN4llvm5APInt8whichBitEj,@function
_ZN4llvm5APInt8whichBitEj:              # @_ZN4llvm5APInt8whichBitEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	andl	$63, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end230:
	.size	_ZN4llvm5APInt8whichBitEj, .Lfunc_end230-_ZN4llvm5APInt8whichBitEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm5APInt9whichWordEj,"axG",@progbits,_ZN4llvm5APInt9whichWordEj,comdat
	.weak	_ZN4llvm5APInt9whichWordEj # -- Begin function _ZN4llvm5APInt9whichWordEj
	.p2align	4, 0x90
	.type	_ZN4llvm5APInt9whichWordEj,@function
_ZN4llvm5APInt9whichWordEj:             # @_ZN4llvm5APInt9whichWordEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	shrl	$6, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end231:
	.size	_ZN4llvm5APInt9whichWordEj, .Lfunc_end231-_ZN4llvm5APInt9whichWordEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE,"axG",@progbits,_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE,comdat
	.weak	_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE # -- Begin function _ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE
	.p2align	4, 0x90
	.type	_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE,@function
_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE: # @_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	xorq	$-1, %rax
	movl	-12(%rbp), %esi
	movq	%rax, %rdi
	callq	_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end232:
	.size	_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE, .Lfunc_end232-_ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE,"axG",@progbits,_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE,comdat
	.weak	_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE # -- Begin function _ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE
	.p2align	4, 0x90
	.type	_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE,@function
_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE: # @_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %esi
	callq	_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end233:
	.size	_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE, .Lfunc_end233-_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE,"axG",@progbits,_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE,comdat
	.weak	_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE # -- Begin function _ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE
	.p2align	4, 0x90
	.type	_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE,@function
_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE: # @_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movl	%esi, -20(%rbp)
	cmpl	$0, -20(%rbp)
	je	.LBB234_3
# %bb.1:
	cmpq	$0, -16(%rbp)
	jne	.LBB234_3
# %bb.2:
	movl	$64, -4(%rbp)
	jmp	.LBB234_4
.LBB234_3:
	movq	-16(%rbp), %rax
	bsrq	%rax, %rax
	xorq	$63, %rax
                                        # kill: def $eax killed $eax killed $rax
	movl	%eax, -4(%rbp)
.LBB234_4:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end234:
	.size	_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE, .Lfunc_end234-_ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm5APInt17countLeadingZerosEv,"axG",@progbits,_ZNK4llvm5APInt17countLeadingZerosEv,comdat
	.weak	_ZNK4llvm5APInt17countLeadingZerosEv # -- Begin function _ZNK4llvm5APInt17countLeadingZerosEv
	.p2align	4, 0x90
	.type	_ZNK4llvm5APInt17countLeadingZerosEv,@function
_ZNK4llvm5APInt17countLeadingZerosEv:   # @_ZNK4llvm5APInt17countLeadingZerosEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm5APInt12isSingleWordEv
	testb	$1, %al
	jne	.LBB235_1
	jmp	.LBB235_2
.LBB235_1:
	movl	$64, %eax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	subl	8(%rcx), %eax
	movl	%eax, -20(%rbp)
	movq	(%rcx), %rdi
	movl	$2, %esi
	callq	_ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE
	subl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB235_3
.LBB235_2:
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm5APInt25countLeadingZerosSlowCaseEv
	movl	%eax, -4(%rbp)
.LBB235_3:
	movl	-4(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end235:
	.size	_ZNK4llvm5APInt17countLeadingZerosEv, .Lfunc_end235-_ZNK4llvm5APInt17countLeadingZerosEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE,"axG",@progbits,_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE,comdat
	.weak	_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE # -- Begin function _ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE
	.p2align	4, 0x90
	.type	_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE,@function
_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE: # @_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm4User14getNumOperandsEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end236:
	.size	_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE, .Lfunc_end236-_ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_,"axG",@progbits,_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_,comdat
	.weak	_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_ # -- Begin function _ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_
	.p2align	4, 0x90
	.type	_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_,@function
_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_: # @_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$-24, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end237:
	.size	_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_, .Lfunc_end237-_ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv,"axG",@progbits,_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv,comdat
	.weak	_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv # -- Begin function _ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv,@function
_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv: # @_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
	callq	_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end238:
	.size	_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv, .Lfunc_end238-_ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_,"axG",@progbits,_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_,comdat
	.weak	_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_ # -- Begin function _ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
	.p2align	4, 0x90
	.type	_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_,@function
_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_: # @_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -32(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rsi
	callq	_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag
	addq	$64, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end239:
	.size	_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_, .Lfunc_end239-_ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv,"axG",@progbits,_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv,comdat
	.weak	_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv # -- Begin function _ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.p2align	4, 0x90
	.type	_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv,@function
_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv: # @_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-24(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE
	leaq	-24(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end240:
	.size	_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv, .Lfunc_end240-_ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv,"axG",@progbits,_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv,comdat
	.weak	_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv # -- Begin function _ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.p2align	4, 0x90
	.type	_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv,@function
_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv: # @_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	-8(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end241:
	.size	_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv, .Lfunc_end241-_ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag,"axG",@progbits,_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag,comdat
	.weak	_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag # -- Begin function _ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag
	.p2align	4, 0x90
	.type	_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag,@function
_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag: # @_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	$0, -32(%rbp)
.LBB242_1:                              # =>This Inner Loop Header: Depth=1
	leaq	-8(%rbp), %rdi
	leaq	-16(%rbp), %rsi
	callq	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_
	testb	$1, %al
	jne	.LBB242_2
	jmp	.LBB242_3
.LBB242_2:                              #   in Loop: Header=BB242_1 Depth=1
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv
	movq	-32(%rbp), %rcx
	addq	$1, %rcx
	movq	%rcx, -32(%rbp)
	jmp	.LBB242_1
.LBB242_3:
	movq	-32(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end242:
	.size	_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag, .Lfunc_end242-_ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_,"axG",@progbits,_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_,comdat
	.weak	_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_ # -- Begin function _ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
	.p2align	4, 0x90
	.type	_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_,@function
_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_: # @_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end243:
	.size	_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_, .Lfunc_end243-_ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_,"axG",@progbits,_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_,comdat
	.weak	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_ # -- Begin function _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_
	.p2align	4, 0x90
	.type	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_,@function
_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_: # @_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end244:
	.size	_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_, .Lfunc_end244-_ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end245:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv, .Lfunc_end245-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv,"axG",@progbits,_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv,comdat
	.weak	_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv # -- Begin function _ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.p2align	4, 0x90
	.type	_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv,@function
_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv: # @_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end246:
	.size	_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv, .Lfunc_end246-_ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm15ilist_node_baseILb0EE7getNextEv,"axG",@progbits,_ZNK4llvm15ilist_node_baseILb0EE7getNextEv,comdat
	.weak	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv # -- Begin function _ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	.p2align	4, 0x90
	.type	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv,@function
_ZNK4llvm15ilist_node_baseILb0EE7getNextEv: # @_ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end247:
	.size	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv, .Lfunc_end247-_ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE,@function
_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE: # @_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end248:
	.size	_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE, .Lfunc_end248-_ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEC2ERKNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm9StringRef4sizeEv,"axG",@progbits,_ZNK4llvm9StringRef4sizeEv,comdat
	.weak	_ZNK4llvm9StringRef4sizeEv # -- Begin function _ZNK4llvm9StringRef4sizeEv
	.p2align	4, 0x90
	.type	_ZNK4llvm9StringRef4sizeEv,@function
_ZNK4llvm9StringRef4sizeEv:             # @_ZNK4llvm9StringRef4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end249:
	.size	_ZNK4llvm9StringRef4sizeEv, .Lfunc_end249-_ZNK4llvm9StringRef4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm9StringRef4dataEv,"axG",@progbits,_ZNK4llvm9StringRef4dataEv,comdat
	.weak	_ZNK4llvm9StringRef4dataEv # -- Begin function _ZNK4llvm9StringRef4dataEv
	.p2align	4, 0x90
	.type	_ZNK4llvm9StringRef4dataEv,@function
_ZNK4llvm9StringRef4dataEv:             # @_ZNK4llvm9StringRef4dataEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end250:
	.size	_ZNK4llvm9StringRef4dataEv, .Lfunc_end250-_ZNK4llvm9StringRef4dataEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm9StringRefC2EPKc,"axG",@progbits,_ZN4llvm9StringRefC2EPKc,comdat
	.weak	_ZN4llvm9StringRefC2EPKc # -- Begin function _ZN4llvm9StringRefC2EPKc
	.p2align	4, 0x90
	.type	_ZN4llvm9StringRefC2EPKc,@function
_ZN4llvm9StringRefC2EPKc:               # @_ZN4llvm9StringRefC2EPKc
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	addq	$8, %rax
	cmpq	$0, -16(%rbp)
	movq	%rax, -24(%rbp)         # 8-byte Spill
	je	.LBB251_2
# %bb.1:
	movq	-16(%rbp), %rdi
	callq	_ZN4llvm9StringRef6strLenEPKc
	movq	%rax, -32(%rbp)         # 8-byte Spill
	jmp	.LBB251_3
.LBB251_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -32(%rbp)         # 8-byte Spill
	jmp	.LBB251_3
.LBB251_3:
	movq	-32(%rbp), %rax         # 8-byte Reload
	movq	-24(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end251:
	.size	_ZN4llvm9StringRefC2EPKc, .Lfunc_end251-_ZN4llvm9StringRefC2EPKc
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm9StringRef6strLenEPKc,"axG",@progbits,_ZN4llvm9StringRef6strLenEPKc,comdat
	.weak	_ZN4llvm9StringRef6strLenEPKc # -- Begin function _ZN4llvm9StringRef6strLenEPKc
	.p2align	4, 0x90
	.type	_ZN4llvm9StringRef6strLenEPKc,@function
_ZN4llvm9StringRef6strLenEPKc:          # @_ZN4llvm9StringRef6strLenEPKc
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	strlen
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end252:
	.size	_ZN4llvm9StringRef6strLenEPKc, .Lfunc_end252-_ZN4llvm9StringRef6strLenEPKc
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
.Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception2
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
.Ltmp430:
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
.Ltmp431:
	jmp	.LBB253_1
.LBB253_1:
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB253_2:
	.cfi_def_cfa %rbp, 16
.Ltmp432:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -16(%rbp)
	movl	%edx, -20(%rbp)
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
# %bb.3:
	movq	-16(%rbp), %rdi
	callq	__clang_call_terminate
.Lfunc_end253:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev, .Lfunc_end253-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table253:
.Lexception2:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase1-.Lttbaseref1
.Lttbaseref1:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end2-.Lcst_begin2
.Lcst_begin2:
	.uleb128 .Ltmp430-.Lfunc_begin2 # >> Call Site 1 <<
	.uleb128 .Ltmp431-.Ltmp430      #   Call between .Ltmp430 and .Ltmp431
	.uleb128 .Ltmp432-.Lfunc_begin2 #     jumps to .Ltmp432
	.byte	1                       #   On action: 1
.Lcst_end2:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase1:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -32(%rbp)         # 8-byte Spill
.LBB254_1:                              # =>This Inner Loop Header: Depth=1
	cmpq	$0, -16(%rbp)
	je	.LBB254_3
# %bb.2:                                #   in Loop: Header=BB254_1 Depth=1
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.LBB254_1
.LBB254_3:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end254:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end254-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end255:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv, .Lfunc_end255-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end256:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev, .Lfunc_end256-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end257:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base, .Lfunc_end257-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end258:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base, .Lfunc_end258-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end259:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end259-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
.Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception3
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	-16(%rbp), %rdi
.Ltmp433:
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
.Ltmp434:
	movq	%rax, -32(%rbp)         # 8-byte Spill
	jmp	.LBB260_1
.LBB260_1:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	movq	-32(%rbp), %rsi         # 8-byte Reload
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB260_2:
	.cfi_def_cfa %rbp, 16
.Ltmp435:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -36(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.Lfunc_end260:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end260-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table260:
.Lexception3:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase2-.Lttbaseref2
.Lttbaseref2:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end3-.Lcst_begin3
.Lcst_begin3:
	.uleb128 .Ltmp433-.Lfunc_begin3 # >> Call Site 1 <<
	.uleb128 .Ltmp434-.Ltmp433      #   Call between .Ltmp433 and .Ltmp434
	.uleb128 .Ltmp435-.Lfunc_begin3 #     jumps to .Ltmp435
	.byte	1                       #   On action: 1
.Lcst_end3:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase2:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
.Lfunc_begin4:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception4
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	-16(%rbp), %rsi
.Ltmp436:
	movl	$1, %edx
	movq	%rax, %rdi
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m
.Ltmp437:
	jmp	.LBB261_1
.LBB261_1:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB261_2:
	.cfi_def_cfa %rbp, 16
.Ltmp438:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -20(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.Lfunc_end261:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end261-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table261:
.Lexception4:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase3-.Lttbaseref3
.Lttbaseref3:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end4-.Lcst_begin4
.Lcst_begin4:
	.uleb128 .Ltmp436-.Lfunc_begin4 # >> Call Site 1 <<
	.uleb128 .Ltmp437-.Ltmp436      #   Call between .Ltmp436 and .Ltmp437
	.uleb128 .Ltmp438-.Lfunc_begin4 #     jumps to .Ltmp438
	.byte	1                       #   On action: 1
.Lcst_end4:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase3:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_ # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end262:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_, .Lfunc_end262-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end263:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv, .Lfunc_end263-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv,"axG",@progbits,_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv,comdat
	.weak	_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv # -- Begin function _ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.p2align	4, 0x90
	.type	_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv,@function
_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv: # @_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end264:
	.size	_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv, .Lfunc_end264-_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_ # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end265:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_, .Lfunc_end265-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv,"axG",@progbits,_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv,comdat
	.weak	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv # -- Begin function _ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv,@function
_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv: # @_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end266:
	.size	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv, .Lfunc_end266-_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv,"axG",@progbits,_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv,comdat
	.weak	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv # -- Begin function _ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv,@function
_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv: # @_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end267:
	.size	_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv, .Lfunc_end267-_ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end268:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m, .Lfunc_end268-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZdlPv
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end269:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m, .Lfunc_end269-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev,"axG",@progbits,_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev,comdat
	.weak	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev # -- Begin function _ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	.p2align	4, 0x90
	.type	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev,@function
_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev: # @_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end270:
	.size	_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev, .Lfunc_end270-_ZNSaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end271:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev, .Lfunc_end271-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
.Lfunc_begin5:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception5
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
.Ltmp439:
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
.Ltmp440:
	jmp	.LBB272_1
.LBB272_1:
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB272_2:
	.cfi_def_cfa %rbp, 16
.Ltmp441:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -16(%rbp)
	movl	%edx, -20(%rbp)
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
# %bb.3:
	movq	-16(%rbp), %rdi
	callq	__clang_call_terminate
.Lfunc_end272:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev, .Lfunc_end272-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EED2Ev
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table272:
.Lexception5:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase4-.Lttbaseref4
.Lttbaseref4:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end5-.Lcst_begin5
.Lcst_begin5:
	.uleb128 .Ltmp439-.Lfunc_begin5 # >> Call Site 1 <<
	.uleb128 .Ltmp440-.Ltmp439      #   Call between .Ltmp439 and .Ltmp440
	.uleb128 .Ltmp441-.Lfunc_begin5 #     jumps to .Ltmp441
	.byte	1                       #   On action: 1
.Lcst_end5:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase4:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -32(%rbp)         # 8-byte Spill
.LBB273_1:                              # =>This Inner Loop Header: Depth=1
	cmpq	$0, -16(%rbp)
	je	.LBB273_3
# %bb.2:                                #   in Loop: Header=BB273_1 Depth=1
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-32(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.LBB273_1
.LBB273_3:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end273:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end273-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end274:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv, .Lfunc_end274-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end275:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev, .Lfunc_end275-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE13_Rb_tree_implIS6_Lb1EED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end276:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base, .Lfunc_end276-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end277:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base, .Lfunc_end277-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end278:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end278-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
.Lfunc_begin6:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception6
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	-16(%rbp), %rdi
.Ltmp442:
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
.Ltmp443:
	movq	%rax, -32(%rbp)         # 8-byte Spill
	jmp	.LBB279_1
.LBB279_1:
	movq	-24(%rbp), %rdi         # 8-byte Reload
	movq	-32(%rbp), %rsi         # 8-byte Reload
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB279_2:
	.cfi_def_cfa %rbp, 16
.Ltmp444:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -36(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.Lfunc_end279:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end279-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table279:
.Lexception6:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase5-.Lttbaseref5
.Lttbaseref5:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end6-.Lcst_begin6
.Lcst_begin6:
	.uleb128 .Ltmp442-.Lfunc_begin6 # >> Call Site 1 <<
	.uleb128 .Ltmp443-.Ltmp442      #   Call between .Ltmp442 and .Ltmp443
	.uleb128 .Ltmp444-.Lfunc_begin6 #     jumps to .Ltmp444
	.byte	1                       #   On action: 1
.Lcst_end6:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase5:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
.Lfunc_begin7:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception7
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	-16(%rbp), %rsi
.Ltmp445:
	movl	$1, %edx
	movq	%rax, %rdi
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m
.Ltmp446:
	jmp	.LBB280_1
.LBB280_1:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB280_2:
	.cfi_def_cfa %rbp, 16
.Ltmp447:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -20(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.Lfunc_end280:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E, .Lfunc_end280-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table280:
.Lexception7:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase6-.Lttbaseref6
.Lttbaseref6:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end7-.Lcst_begin7
.Lcst_begin7:
	.uleb128 .Ltmp445-.Lfunc_begin7 # >> Call Site 1 <<
	.uleb128 .Ltmp446-.Ltmp445      #   Call between .Ltmp445 and .Ltmp446
	.uleb128 .Ltmp447-.Lfunc_begin7 #     jumps to .Ltmp447
	.byte	1                       #   On action: 1
.Lcst_end7:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase6:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_ # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end281:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_, .Lfunc_end281-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end282:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv, .Lfunc_end282-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv,"axG",@progbits,_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv,comdat
	.weak	_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv # -- Begin function _ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.p2align	4, 0x90
	.type	_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv,@function
_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv: # @_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end283:
	.size	_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv, .Lfunc_end283-_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_ # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end284:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_, .Lfunc_end284-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv,"axG",@progbits,_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv,comdat
	.weak	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv # -- Begin function _ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv,@function
_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv: # @_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end285:
	.size	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv, .Lfunc_end285-_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv,"axG",@progbits,_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv,comdat
	.weak	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv # -- Begin function _ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv,@function
_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv: # @_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end286:
	.size	_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv, .Lfunc_end286-_ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end287:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m, .Lfunc_end287-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZdlPv
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end288:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m, .Lfunc_end288-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev,"axG",@progbits,_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev,comdat
	.weak	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev # -- Begin function _ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	.p2align	4, 0x90
	.type	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev,@function
_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev: # @_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end289:
	.size	_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev, .Lfunc_end289-_ZNSaISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end290:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev, .Lfunc_end290-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEED2Ev
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end291:
	.size	_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end291-_ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end292:
	.size	_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end292-_ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_,"axG",@progbits,_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_,comdat
	.weak	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_ # -- Begin function _ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_,@function
_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_: # @_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_
	movq	(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end293:
	.size	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_, .Lfunc_end293-_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB294_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB294_2
.LBB294_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB294_3
	jmp	.LBB294_4
.LBB294_3:
	jmp	.LBB294_5
.LBB294_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB294_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end294:
	.size	_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_, .Lfunc_end294-_ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm7PHINode7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end295:
	.size	_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_, .Lfunc_end295-_ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm7PHINode7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm7PHINode7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm7PHINode7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm7PHINode7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm7PHINode7classofEPKNS_11InstructionE,@function
_ZN4llvm7PHINode7classofEPKNS_11InstructionE: # @_ZN4llvm7PHINode7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$55, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end296:
	.size	_ZN4llvm7PHINode7classofEPKNS_11InstructionE, .Lfunc_end296-_ZN4llvm7PHINode7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_,"axG",@progbits,_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_,comdat
	.weak	_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_ # -- Begin function _ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_,@function
_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_: # @_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end297:
	.size	_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_, .Lfunc_end297-_ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv,"axG",@progbits,_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv,comdat
	.weak	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv # -- Begin function _ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv
	.p2align	4, 0x90
	.type	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv,@function
_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv: # @_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end298:
	.size	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv, .Lfunc_end298-_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv,"axG",@progbits,_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv,comdat
	.weak	_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv # -- Begin function _ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	.p2align	4, 0x90
	.type	_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv,@function
_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv: # @_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end299:
	.size	_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv, .Lfunc_end299-_ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,@function
_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE: # @_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end300:
	.size	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE, .Lfunc_end300-_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,"axG",@progbits,_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,comdat
	.weak	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE # -- Begin function _ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.p2align	4, 0x90
	.type	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,@function
_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE: # @_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	cmpq	$0, %rax
	movq	%rax, -16(%rbp)         # 8-byte Spill
	je	.LBB301_2
# %bb.1:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$-56, %rax
	movq	%rax, -24(%rbp)         # 8-byte Spill
	jmp	.LBB301_3
.LBB301_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -24(%rbp)         # 8-byte Spill
	jmp	.LBB301_3
.LBB301_3:
	movq	-24(%rbp), %rax         # 8-byte Reload
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end301:
	.size	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE, .Lfunc_end301-_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv,"axG",@progbits,_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv,comdat
	.weak	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv # -- Begin function _ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv
	.p2align	4, 0x90
	.type	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv,@function
_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv: # @_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end302:
	.size	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv, .Lfunc_end302-_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,@function
_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE: # @_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end303:
	.size	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE, .Lfunc_end303-_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,"axG",@progbits,_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,comdat
	.weak	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE # -- Begin function _ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.p2align	4, 0x90
	.type	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,@function
_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE: # @_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	cmpq	$0, %rax
	movq	%rax, -16(%rbp)         # 8-byte Spill
	je	.LBB304_2
# %bb.1:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$-24, %rax
	movq	%rax, -24(%rbp)         # 8-byte Spill
	jmp	.LBB304_3
.LBB304_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -24(%rbp)         # 8-byte Spill
	jmp	.LBB304_3
.LBB304_3:
	movq	-24(%rbp), %rax         # 8-byte Reload
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end304:
	.size	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE, .Lfunc_end304-_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_,"axG",@progbits,_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_,comdat
	.weak	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_ # -- Begin function _ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_
	.p2align	4, 0x90
	.type	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_,@function
_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_: # @_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	_ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end305:
	.size	_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_, .Lfunc_end305-_ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11Instruction9getParentEv,"axG",@progbits,_ZN4llvm11Instruction9getParentEv,comdat
	.weak	_ZN4llvm11Instruction9getParentEv # -- Begin function _ZN4llvm11Instruction9getParentEv
	.p2align	4, 0x90
	.type	_ZN4llvm11Instruction9getParentEv,@function
_ZN4llvm11Instruction9getParentEv:      # @_ZN4llvm11Instruction9getParentEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end306:
	.size	_ZN4llvm11Instruction9getParentEv, .Lfunc_end306-_ZN4llvm11Instruction9getParentEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_,"axG",@progbits,_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_,comdat
	.weak	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_ # -- Begin function _ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_
	.p2align	4, 0x90
	.type	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_,@function
_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_: # @_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %ecx
	movq	-16(%rbp), %rax
	cmpl	8(%rax), %ecx
	sete	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end307:
	.size	_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_, .Lfunc_end307-_ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi,"axG",@progbits,_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi,comdat
	.weak	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi # -- Begin function _ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi
	.p2align	4, 0x90
	.type	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi,@function
_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi: # @_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-12(%rbp), %ecx
	movl	%ecx, -16(%rbp)
	movl	-16(%rbp), %esi
	movq	%rax, %rdi
	movq	%rax, -24(%rbp)         # 8-byte Spill
	callq	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -25(%rbp)          # 1-byte Spill
	jne	.LBB308_1
	jmp	.LBB308_2
.LBB308_1:
	movb	$1, %al
	movb	%al, -25(%rbp)          # 1-byte Spill
	jmp	.LBB308_2
.LBB308_2:
	movb	-25(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB308_3
	jmp	.LBB308_4
.LBB308_3:
	jmp	.LBB308_5
.LBB308_4:
	movabsq	$.L.str.101, %rdi
	movabsq	$.L.str.99, %rsi
	movl	$218, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi, %rcx
	callq	__assert_fail
.LBB308_5:
	movl	-16(%rbp), %eax
	movq	-24(%rbp), %rcx         # 8-byte Reload
	movl	%eax, 8(%rcx)
	movq	%rcx, %rax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end308:
	.size	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi, .Lfunc_end308-_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi,"axG",@progbits,_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi,comdat
	.weak	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi # -- Begin function _ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi
	.p2align	4, 0x90
	.type	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi,@function
_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi: # @_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rcx
	cmpl	$0, -12(%rbp)
	movq	%rcx, -24(%rbp)         # 8-byte Spill
	movb	%al, -25(%rbp)          # 1-byte Spill
	jl	.LBB309_4
# %bb.1:
	cmpl	$0, -12(%rbp)
	movb	$1, %al
	movb	%al, -26(%rbp)          # 1-byte Spill
	je	.LBB309_3
# %bb.2:
	movl	-12(%rbp), %eax
	movq	-24(%rbp), %rcx         # 8-byte Reload
	movq	(%rcx), %rdi
	movl	%eax, -32(%rbp)         # 4-byte Spill
	callq	_ZNK4llvm11Instruction16getNumSuccessorsEv
	movl	-32(%rbp), %edx         # 4-byte Reload
	cmpl	%eax, %edx
	setle	%sil
	movb	%sil, -26(%rbp)         # 1-byte Spill
.LBB309_3:
	movb	-26(%rbp), %al          # 1-byte Reload
	movb	%al, -25(%rbp)          # 1-byte Spill
.LBB309_4:
	movb	-25(%rbp), %al          # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end309:
	.size	_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi, .Lfunc_end309-_ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv,"axG",@progbits,_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv,comdat
	.weak	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv # -- Begin function _ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.p2align	4, 0x90
	.type	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv,@function
_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv: # @_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end310:
	.size	_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv, .Lfunc_end310-_ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,"axG",@progbits,_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,comdat
	.weak	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE # -- Begin function _ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.p2align	4, 0x90
	.type	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE,@function
_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE: # @_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end311:
	.size	_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE, .Lfunc_end311-_ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,"axG",@progbits,_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,comdat
	.weak	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE # -- Begin function _ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.p2align	4, 0x90
	.type	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE,@function
_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE: # @_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	cmpq	$0, %rax
	movq	%rax, -16(%rbp)         # 8-byte Spill
	je	.LBB312_2
# %bb.1:
	movq	-16(%rbp), %rax         # 8-byte Reload
	addq	$-24, %rax
	movq	%rax, -24(%rbp)         # 8-byte Spill
	jmp	.LBB312_3
.LBB312_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -24(%rbp)         # 8-byte Spill
	jmp	.LBB312_3
.LBB312_3:
	movq	-24(%rbp), %rax         # 8-byte Reload
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end312:
	.size	_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE, .Lfunc_end312-_ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end313:
	.size	_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_, .Lfunc_end313-_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB314_1
	jmp	.LBB314_2
.LBB314_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB314_2
.LBB314_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB314_3
	jmp	.LBB314_4
.LBB314_3:
	jmp	.LBB314_5
.LBB314_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB314_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end314:
	.size	_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end314-_ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end315:
	.size	_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end315-_ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end316:
	.size	_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end316-_ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB317_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB317_2
.LBB317_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB317_3
	jmp	.LBB317_4
.LBB317_3:
	jmp	.LBB317_5
.LBB317_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB317_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end317:
	.size	_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_, .Lfunc_end317-_ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm9StoreInst7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end318:
	.size	_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_, .Lfunc_end318-_ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm9StoreInst7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm9StoreInst7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm9StoreInst7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm9StoreInst7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm9StoreInst7classofEPKNS_11InstructionE,@function
_ZN4llvm9StoreInst7classofEPKNS_11InstructionE: # @_ZN4llvm9StoreInst7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$33, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end319:
	.size	_ZN4llvm9StoreInst7classofEPKNS_11InstructionE, .Lfunc_end319-_ZN4llvm9StoreInst7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end320:
	.size	_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end320-_ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end321:
	.size	_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_, .Lfunc_end321-_ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end322:
	.size	_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_, .Lfunc_end322-_ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB323_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB323_2
.LBB323_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB323_3
	jmp	.LBB323_4
.LBB323_3:
	jmp	.LBB323_5
.LBB323_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_, %rcx
	callq	__assert_fail
.LBB323_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end323:
	.size	_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_, .Lfunc_end323-_ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value10getValueIDEv
	cmpl	$0, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end324:
	.size	_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_, .Lfunc_end324-_ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end325:
	.size	_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_, .Lfunc_end325-_ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end326:
	.size	_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_, .Lfunc_end326-_ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB327_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB327_2
.LBB327_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB327_3
	jmp	.LBB327_4
.LBB327_3:
	jmp	.LBB327_5
.LBB327_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_, %rcx
	callq	__assert_fail
.LBB327_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end327:
	.size	_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_, .Lfunc_end327-_ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value10getValueIDEv
	cmpl	$24, %eax
	setae	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end328:
	.size	_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_, .Lfunc_end328-_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end329:
	.size	_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_, .Lfunc_end329-_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB330_1
	jmp	.LBB330_2
.LBB330_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB330_2
.LBB330_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB330_3
	jmp	.LBB330_4
.LBB330_3:
	jmp	.LBB330_5
.LBB330_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB330_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end330:
	.size	_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end330-_ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end331:
	.size	_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end331-_ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end332:
	.size	_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end332-_ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB333_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB333_2
.LBB333_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB333_3
	jmp	.LBB333_4
.LBB333_3:
	jmp	.LBB333_5
.LBB333_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB333_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end333:
	.size	_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_, .Lfunc_end333-_ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm10BranchInst7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end334:
	.size	_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_, .Lfunc_end334-_ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10BranchInst7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm10BranchInst7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm10BranchInst7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm10BranchInst7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm10BranchInst7classofEPKNS_11InstructionE,@function
_ZN4llvm10BranchInst7classofEPKNS_11InstructionE: # @_ZN4llvm10BranchInst7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$2, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end335:
	.size	_ZN4llvm10BranchInst7classofEPKNS_11InstructionE, .Lfunc_end335-_ZN4llvm10BranchInst7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end336:
	.size	_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end336-_ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end337:
	.size	_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_, .Lfunc_end337-_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB338_1
	jmp	.LBB338_2
.LBB338_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB338_2
.LBB338_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB338_3
	jmp	.LBB338_4
.LBB338_3:
	jmp	.LBB338_5
.LBB338_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB338_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end338:
	.size	_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end338-_ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end339:
	.size	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end339-_ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end340:
	.size	_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end340-_ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB341_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB341_2
.LBB341_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB341_3
	jmp	.LBB341_4
.LBB341_3:
	jmp	.LBB341_5
.LBB341_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB341_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end341:
	.size	_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_, .Lfunc_end341-_ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end342:
	.size	_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_, .Lfunc_end342-_ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10SwitchInst7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm10SwitchInst7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE,@function
_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE: # @_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$3, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end343:
	.size	_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE, .Lfunc_end343-_ZN4llvm10SwitchInst7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end344:
	.size	_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end344-_ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end345:
	.size	_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_, .Lfunc_end345-_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB346_1
	jmp	.LBB346_2
.LBB346_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB346_2
.LBB346_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB346_3
	jmp	.LBB346_4
.LBB346_3:
	jmp	.LBB346_5
.LBB346_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB346_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end346:
	.size	_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end346-_ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end347:
	.size	_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end347-_ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end348:
	.size	_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end348-_ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB349_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB349_2
.LBB349_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB349_3
	jmp	.LBB349_4
.LBB349_3:
	jmp	.LBB349_5
.LBB349_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB349_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end349:
	.size	_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_, .Lfunc_end349-_ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8CallInst7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end350:
	.size	_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_, .Lfunc_end350-_ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8CallInst7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm8CallInst7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm8CallInst7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm8CallInst7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm8CallInst7classofEPKNS_11InstructionE,@function
_ZN4llvm8CallInst7classofEPKNS_11InstructionE: # @_ZN4llvm8CallInst7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$56, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end351:
	.size	_ZN4llvm8CallInst7classofEPKNS_11InstructionE, .Lfunc_end351-_ZN4llvm8CallInst7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end352:
	.size	_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end352-_ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end353:
	.size	_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_, .Lfunc_end353-_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB354_1
	jmp	.LBB354_2
.LBB354_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB354_2
.LBB354_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB354_3
	jmp	.LBB354_4
.LBB354_3:
	jmp	.LBB354_5
.LBB354_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB354_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end354:
	.size	_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end354-_ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end355:
	.size	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end355-_ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end356:
	.size	_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end356-_ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB357_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB357_2
.LBB357_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB357_3
	jmp	.LBB357_4
.LBB357_3:
	jmp	.LBB357_5
.LBB357_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB357_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end357:
	.size	_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_, .Lfunc_end357-_ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end358:
	.size	_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_, .Lfunc_end358-_ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10InvokeInst7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm10InvokeInst7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE,@function
_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE: # @_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$5, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end359:
	.size	_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE, .Lfunc_end359-_ZN4llvm10InvokeInst7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end360:
	.size	_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end360-_ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end361:
	.size	_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_, .Lfunc_end361-_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB362_1
	jmp	.LBB362_2
.LBB362_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB362_2
.LBB362_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB362_3
	jmp	.LBB362_4
.LBB362_3:
	jmp	.LBB362_5
.LBB362_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB362_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end362:
	.size	_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end362-_ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end363:
	.size	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end363-_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end364:
	.size	_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end364-_ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB365_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB365_2
.LBB365_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB365_3
	jmp	.LBB365_4
.LBB365_3:
	jmp	.LBB365_5
.LBB365_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB365_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end365:
	.size	_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_, .Lfunc_end365-_ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end366:
	.size	_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_, .Lfunc_end366-_ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE,@function
_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE: # @_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9isUnaryOpEv
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end367:
	.size	_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE, .Lfunc_end367-_ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm11Instruction9isUnaryOpEv,"axG",@progbits,_ZNK4llvm11Instruction9isUnaryOpEv,comdat
	.weak	_ZNK4llvm11Instruction9isUnaryOpEv # -- Begin function _ZNK4llvm11Instruction9isUnaryOpEv
	.p2align	4, 0x90
	.type	_ZNK4llvm11Instruction9isUnaryOpEv,@function
_ZNK4llvm11Instruction9isUnaryOpEv:     # @_ZNK4llvm11Instruction9isUnaryOpEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	movl	%eax, %edi
	callq	_ZN4llvm11Instruction9isUnaryOpEj
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end368:
	.size	_ZNK4llvm11Instruction9isUnaryOpEv, .Lfunc_end368-_ZNK4llvm11Instruction9isUnaryOpEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11Instruction9isUnaryOpEj,"axG",@progbits,_ZN4llvm11Instruction9isUnaryOpEj,comdat
	.weak	_ZN4llvm11Instruction9isUnaryOpEj # -- Begin function _ZN4llvm11Instruction9isUnaryOpEj
	.p2align	4, 0x90
	.type	_ZN4llvm11Instruction9isUnaryOpEj,@function
_ZN4llvm11Instruction9isUnaryOpEj:      # @_ZN4llvm11Instruction9isUnaryOpEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movl	%edi, -4(%rbp)
	cmpl	$12, -4(%rbp)
	movb	%al, -5(%rbp)           # 1-byte Spill
	jb	.LBB369_2
# %bb.1:
	cmpl	$13, -4(%rbp)
	setb	%al
	movb	%al, -5(%rbp)           # 1-byte Spill
.LBB369_2:
	movb	-5(%rbp), %al           # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end369:
	.size	_ZN4llvm11Instruction9isUnaryOpEj, .Lfunc_end369-_ZN4llvm11Instruction9isUnaryOpEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end370:
	.size	_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end370-_ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end371:
	.size	_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_, .Lfunc_end371-_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB372_1
	jmp	.LBB372_2
.LBB372_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB372_2
.LBB372_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB372_3
	jmp	.LBB372_4
.LBB372_3:
	jmp	.LBB372_5
.LBB372_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB372_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end372:
	.size	_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end372-_ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end373:
	.size	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end373-_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end374:
	.size	_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end374-_ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB375_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB375_2
.LBB375_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB375_3
	jmp	.LBB375_4
.LBB375_3:
	jmp	.LBB375_5
.LBB375_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB375_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end375:
	.size	_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_, .Lfunc_end375-_ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end376:
	.size	_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_, .Lfunc_end376-_ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE,@function
_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE: # @_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction10isBinaryOpEv
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end377:
	.size	_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE, .Lfunc_end377-_ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK4llvm11Instruction10isBinaryOpEv,"axG",@progbits,_ZNK4llvm11Instruction10isBinaryOpEv,comdat
	.weak	_ZNK4llvm11Instruction10isBinaryOpEv # -- Begin function _ZNK4llvm11Instruction10isBinaryOpEv
	.p2align	4, 0x90
	.type	_ZNK4llvm11Instruction10isBinaryOpEv,@function
_ZNK4llvm11Instruction10isBinaryOpEv:   # @_ZNK4llvm11Instruction10isBinaryOpEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	movl	%eax, %edi
	callq	_ZN4llvm11Instruction10isBinaryOpEj
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end378:
	.size	_ZNK4llvm11Instruction10isBinaryOpEv, .Lfunc_end378-_ZNK4llvm11Instruction10isBinaryOpEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11Instruction10isBinaryOpEj,"axG",@progbits,_ZN4llvm11Instruction10isBinaryOpEj,comdat
	.weak	_ZN4llvm11Instruction10isBinaryOpEj # -- Begin function _ZN4llvm11Instruction10isBinaryOpEj
	.p2align	4, 0x90
	.type	_ZN4llvm11Instruction10isBinaryOpEj,@function
_ZN4llvm11Instruction10isBinaryOpEj:    # @_ZN4llvm11Instruction10isBinaryOpEj
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movl	%edi, -4(%rbp)
	cmpl	$13, -4(%rbp)
	movb	%al, -5(%rbp)           # 1-byte Spill
	jb	.LBB379_2
# %bb.1:
	cmpl	$31, -4(%rbp)
	setb	%al
	movb	%al, -5(%rbp)           # 1-byte Spill
.LBB379_2:
	movb	-5(%rbp), %al           # 1-byte Reload
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end379:
	.size	_ZN4llvm11Instruction10isBinaryOpEj, .Lfunc_end379-_ZN4llvm11Instruction10isBinaryOpEj
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end380:
	.size	_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end380-_ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end381:
	.size	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_, .Lfunc_end381-_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end382:
	.size	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_, .Lfunc_end382-_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB383_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB383_2
.LBB383_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB383_3
	jmp	.LBB383_4
.LBB383_3:
	jmp	.LBB383_5
.LBB383_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_, %rcx
	callq	__assert_fail
.LBB383_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end383:
	.size	_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_, .Lfunc_end383-_ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm11ConstantInt7classofEPKNS_5ValueE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end384:
	.size	_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_, .Lfunc_end384-_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11ConstantInt7classofEPKNS_5ValueE,"axG",@progbits,_ZN4llvm11ConstantInt7classofEPKNS_5ValueE,comdat
	.weak	_ZN4llvm11ConstantInt7classofEPKNS_5ValueE # -- Begin function _ZN4llvm11ConstantInt7classofEPKNS_5ValueE
	.p2align	4, 0x90
	.type	_ZN4llvm11ConstantInt7classofEPKNS_5ValueE,@function
_ZN4llvm11ConstantInt7classofEPKNS_5ValueE: # @_ZN4llvm11ConstantInt7classofEPKNS_5ValueE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value10getValueIDEv
	cmpl	$13, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end385:
	.size	_ZN4llvm11ConstantInt7classofEPKNS_5ValueE, .Lfunc_end385-_ZN4llvm11ConstantInt7classofEPKNS_5ValueE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB386_1
	jmp	.LBB386_2
.LBB386_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB386_2
.LBB386_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB386_3
	jmp	.LBB386_4
.LBB386_3:
	jmp	.LBB386_5
.LBB386_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB386_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end386:
	.size	_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end386-_ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end387:
	.size	_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_, .Lfunc_end387-_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end388:
	.size	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end388-_ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end389:
	.size	_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end389-_ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB390_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB390_2
.LBB390_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB390_3
	jmp	.LBB390_4
.LBB390_3:
	jmp	.LBB390_5
.LBB390_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB390_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end390:
	.size	_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_, .Lfunc_end390-_ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end391:
	.size	_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_, .Lfunc_end391-_ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm10AllocaInst7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm10AllocaInst7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE,@function
_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE: # @_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$31, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end392:
	.size	_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE, .Lfunc_end392-_ZN4llvm10AllocaInst7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_,@function
_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_: # @_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end393:
	.size	_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_, .Lfunc_end393-_ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_,@function
_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_: # @_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end394:
	.size	_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_, .Lfunc_end394-_ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_,"axG",@progbits,_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_,comdat
	.weak	_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_ # -- Begin function _ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_,@function
_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_: # @_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm3Use3getEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end395:
	.size	_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_, .Lfunc_end395-_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_ # -- Begin function _ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_,@function
_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_: # @_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB396_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB396_2
.LBB396_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB396_3
	jmp	.LBB396_4
.LBB396_3:
	jmp	.LBB396_5
.LBB396_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$91, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_, %rcx
	callq	__assert_fail
.LBB396_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end396:
	.size	_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_, .Lfunc_end396-_ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rsi
	leaq	-56(%rbp), %rdi
	movq	%rax, -104(%rbp)        # 8-byte Spill
	callq	_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_
	movq	-104(%rbp), %rdi        # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	cmpq	$0, -40(%rbp)
	je	.LBB397_2
# %bb.1:
	leaq	-64(%rbp), %rdi
	movq	-104(%rbp), %rsi        # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rdi
	movq	%rsi, -112(%rbp)        # 8-byte Spill
	movq	%rdx, -120(%rbp)        # 8-byte Spill
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	-104(%rbp), %rdi        # 8-byte Reload
	movq	-112(%rbp), %rsi        # 8-byte Reload
	movq	-120(%rbp), %rdx        # 8-byte Reload
	movq	%rax, %rcx
	leaq	-64(%rbp), %r8
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_
	movq	%rax, -72(%rbp)
	movb	$1, -73(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-72(%rbp), %rsi
	leaq	-73(%rbp), %rdx
	callq	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_
	jmp	.LBB397_3
.LBB397_2:
	movq	-48(%rbp), %rsi
	leaq	-88(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	movb	$0, -89(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-88(%rbp), %rsi
	leaq	-89(%rbp), %rdx
	callq	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_
.LBB397_3:
	movq	-16(%rbp), %rax
	movb	-8(%rbp), %dl
	addq	$128, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end397:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_, .Lfunc_end397-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_,"axG",@progbits,_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_,comdat
	.weak	_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_ # -- Begin function _ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_
	.p2align	4, 0x90
	.type	_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_,@function
_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_: # @_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end398:
	.size	_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_, .Lfunc_end398-_ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_,"axG",@progbits,_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_,comdat
	.weak	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_ # -- Begin function _ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	.p2align	4, 0x90
	.type	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_,@function
_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_: # @_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE
	movb	(%rax), %cl
	andb	$1, %cl
	movq	-32(%rbp), %rax         # 8-byte Reload
	movb	%cl, 8(%rax)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end399:
	.size	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_, .Lfunc_end399-_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm5ValueEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -88(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	movq	%rax, -40(%rbp)
	movq	-88(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	movq	%rax, -48(%rbp)
	movb	$1, -49(%rbp)
.LBB400_1:                              # =>This Inner Loop Header: Depth=1
	cmpq	$0, -40(%rbp)
	je	.LBB400_6
# %bb.2:                                #   in Loop: Header=BB400_1 Depth=1
	movq	-40(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-88(%rbp), %rax         # 8-byte Reload
	movq	-32(%rbp), %rcx
	movq	(%rcx), %rsi
	movq	-40(%rbp), %rdi
	movq	%rax, -96(%rbp)         # 8-byte Spill
	movq	%rsi, -104(%rbp)        # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	movq	(%rax), %rdx
	movq	-96(%rbp), %rdi         # 8-byte Reload
	movq	-104(%rbp), %rsi        # 8-byte Reload
	callq	_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	andb	$1, %al
	movb	%al, -49(%rbp)
	testb	$1, -49(%rbp)
	je	.LBB400_4
# %bb.3:                                #   in Loop: Header=BB400_1 Depth=1
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	movq	%rax, -112(%rbp)        # 8-byte Spill
	jmp	.LBB400_5
.LBB400_4:                              #   in Loop: Header=BB400_1 Depth=1
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	movq	%rax, -112(%rbp)        # 8-byte Spill
.LBB400_5:                              #   in Loop: Header=BB400_1 Depth=1
	movq	-112(%rbp), %rax        # 8-byte Reload
	movq	%rax, -40(%rbp)
	jmp	.LBB400_1
.LBB400_6:
	movq	-48(%rbp), %rsi
	leaq	-64(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	testb	$1, -49(%rbp)
	je	.LBB400_11
# %bb.7:
	movq	-88(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	movq	%rax, -72(%rbp)
	leaq	-64(%rbp), %rdi
	leaq	-72(%rbp), %rsi
	callq	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_
	testb	$1, %al
	jne	.LBB400_8
	jmp	.LBB400_9
.LBB400_8:
	leaq	-16(%rbp), %rdi
	leaq	-40(%rbp), %rsi
	leaq	-48(%rbp), %rdx
	callq	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_
	jmp	.LBB400_14
.LBB400_9:
	leaq	-64(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv
# %bb.10:
	jmp	.LBB400_11
.LBB400_11:
	movq	-88(%rbp), %rax         # 8-byte Reload
	movq	-64(%rbp), %rdi
	movq	%rax, -120(%rbp)        # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	movq	(%rax), %rsi
	movq	-32(%rbp), %rax
	movq	(%rax), %rdx
	movq	-120(%rbp), %rdi        # 8-byte Reload
	callq	_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	testb	$1, %al
	jne	.LBB400_12
	jmp	.LBB400_13
.LBB400_12:
	leaq	-16(%rbp), %rdi
	leaq	-40(%rbp), %rsi
	leaq	-48(%rbp), %rdx
	callq	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_
	jmp	.LBB400_14
.LBB400_13:
	leaq	-64(%rbp), %rsi
	movq	$0, -80(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-80(%rbp), %rdx
	callq	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_
.LBB400_14:
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	$128, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end400:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_, .Lfunc_end400-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_,"axG",@progbits,_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_,comdat
	.weak	_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_ # -- Begin function _ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_
	.p2align	4, 0x90
	.type	_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_,@function
_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_: # @_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end401:
	.size	_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_, .Lfunc_end401-_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end402:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_, .Lfunc_end402-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	%rcx, -40(%rbp)
	movq	%r8, -48(%rbp)
	movq	-16(%rbp), %rax
	cmpq	$0, -24(%rbp)
	movb	$1, %r9b
	movq	%rax, -72(%rbp)         # 8-byte Spill
	movb	%r9b, -73(%rbp)         # 1-byte Spill
	jne	.LBB403_3
# %bb.1:
	movq	-32(%rbp), %rax
	movq	-72(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -88(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	movq	-88(%rbp), %rcx         # 8-byte Reload
	cmpq	%rax, %rcx
	movb	$1, %dl
	movb	%dl, -73(%rbp)          # 1-byte Spill
	je	.LBB403_3
# %bb.2:
	movq	-72(%rbp), %rax         # 8-byte Reload
	movq	-40(%rbp), %rsi
	leaq	-56(%rbp), %rdi
	movq	%rax, -96(%rbp)         # 8-byte Spill
	callq	_ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_
	movq	(%rax), %rsi
	movq	-32(%rbp), %rdi
	movq	%rsi, -104(%rbp)        # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	movq	(%rax), %rdx
	movq	-96(%rbp), %rdi         # 8-byte Reload
	movq	-104(%rbp), %rsi        # 8-byte Reload
	callq	_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	movb	%al, -73(%rbp)          # 1-byte Spill
.LBB403_3:
	movb	-73(%rbp), %al          # 1-byte Reload
	andb	$1, %al
	movb	%al, -49(%rbp)
	movq	-48(%rbp), %rdi
	movq	-40(%rbp), %rcx
	movq	%rdi, -112(%rbp)        # 8-byte Spill
	movq	%rcx, %rdi
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	-112(%rbp), %rdi        # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	movq	%rax, -64(%rbp)
	movb	-49(%rbp), %dl
	movq	-64(%rbp), %rax
	movq	-32(%rbp), %rcx
	movq	-72(%rbp), %rsi         # 8-byte Reload
	addq	$8, %rsi
	andb	$1, %dl
	movzbl	%dl, %edi
	movq	%rsi, -120(%rbp)        # 8-byte Spill
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movq	-120(%rbp), %rcx        # 8-byte Reload
	callq	_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
	movq	-72(%rbp), %rax         # 8-byte Reload
	movq	40(%rax), %rcx
	addq	$1, %rcx
	movq	%rcx, 40(%rax)
	movq	-64(%rbp), %rcx
	leaq	-8(%rbp), %rdi
	movq	%rcx, %rsi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	movq	-8(%rbp), %rax
	addq	$128, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end403:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_, .Lfunc_end403-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE,"axG",@progbits,_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE,comdat
	.weak	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE # -- Begin function _ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE,@function
_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE: # @_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end404:
	.size	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE, .Lfunc_end404-_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_,"axG",@progbits,_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_,comdat
	.weak	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_ # -- Begin function _ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_
	.p2align	4, 0x90
	.type	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_,@function
_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_: # @_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE
	movb	(%rax), %r8b
	andb	$1, %r8b
	movq	-32(%rbp), %rax         # 8-byte Reload
	movb	%r8b, 8(%rax)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end405:
	.size	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_, .Lfunc_end405-_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm5ValueEEbEC2IS4_bLb1EEEOT_OT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base # -- Begin function _ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base,@function
_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base: # @_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end406:
	.size	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base, .Lfunc_end406-_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end407:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv, .Lfunc_end407-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt4lessIPN4llvm5ValueEEclES2_S2_,"axG",@progbits,_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_,comdat
	.weak	_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_ # -- Begin function _ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	.p2align	4, 0x90
	.type	_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_,@function
_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_:   # @_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rcx
	cmpq	%rcx, %rax
	setb	%r8b
	andb	$1, %r8b
	movzbl	%r8b, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end408:
	.size	_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_, .Lfunc_end408-_ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	leaq	-16(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end409:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E, .Lfunc_end409-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_,"axG",@progbits,_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_,comdat
	.weak	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_ # -- Begin function _ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_
	.p2align	4, 0x90
	.type	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_,@function
_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_: # @_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	sete	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end410:
	.size	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_, .Lfunc_end410-_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rsi
	leaq	-8(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEC2EPSt18_Rb_tree_node_base
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end411:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv, .Lfunc_end411-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_,"axG",@progbits,_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_,comdat
	.weak	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_ # -- Begin function _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_
	.p2align	4, 0x90
	.type	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_,@function
_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_: # @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, 8(%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end412:
	.size	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_, .Lfunc_end412-_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm5ValueEERS1_Lb1EEEOT_OT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv,"axG",@progbits,_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv,comdat
	.weak	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv # -- Begin function _ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv
	.p2align	4, 0x90
	.type	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv,@function
_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv: # @_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end413:
	.size	_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv, .Lfunc_end413-_ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end414:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base, .Lfunc_end414-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_,"axG",@progbits,_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_,comdat
	.weak	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_ # -- Begin function _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_
	.p2align	4, 0x90
	.type	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_,@function
_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_: # @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, 8(%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end415:
	.size	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_, .Lfunc_end415-_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_,"axG",@progbits,_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_,comdat
	.weak	_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_ # -- Begin function _ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_
	.p2align	4, 0x90
	.type	_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_,@function
_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_: # @_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end416:
	.size	_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_, .Lfunc_end416-_ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv,"axG",@progbits,_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv,comdat
	.weak	_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv # -- Begin function _ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.p2align	4, 0x90
	.type	_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv,@function
_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv: # @_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	callq	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end417:
	.size	_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv, .Lfunc_end417-_ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv,"axG",@progbits,_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv,comdat
	.weak	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv # -- Begin function _ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.p2align	4, 0x90
	.type	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv,@function
_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv: # @_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end418:
	.size	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv, .Lfunc_end418-_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv,"axG",@progbits,_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv,comdat
	.weak	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv # -- Begin function _ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.p2align	4, 0x90
	.type	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv,@function
_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv: # @_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end419:
	.size	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv, .Lfunc_end419-_ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE,"axG",@progbits,_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE,comdat
	.weak	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE # -- Begin function _ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE,@function
_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE: # @_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end420:
	.size	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE, .Lfunc_end420-_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE,"axG",@progbits,_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE,comdat
	.weak	_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE # -- Begin function _ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE,@function
_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE: # @_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end421:
	.size	_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE, .Lfunc_end421-_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_,"axG",@progbits,_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_,comdat
	.weak	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_ # -- Begin function _ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.p2align	4, 0x90
	.type	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_,@function
_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_: # @_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	-16(%rbp), %rax
	movq	%rdi, -24(%rbp)         # 8-byte Spill
	movq	%rax, %rdi
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	-24(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end422:
	.size	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_, .Lfunc_end422-_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rsi, -40(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	-40(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	movq	-24(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end423:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_, .Lfunc_end423-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	%rax, %rdi
	movl	$1, %esi
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end424:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv, .Lfunc_end424-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_,@function
_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_: # @_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
.Lfunc_begin8:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception8
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	-16(%rbp), %rdi
.Ltmp448:
	movq	%rax, -56(%rbp)         # 8-byte Spill
	callq	_ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
.Ltmp449:
	movq	%rax, -64(%rbp)         # 8-byte Spill
	jmp	.LBB425_1
.LBB425_1:
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	-56(%rbp), %rdi         # 8-byte Reload
	movq	-64(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_
	jmp	.LBB425_6
.LBB425_2:
.Ltmp450:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -32(%rbp)
	movl	%edx, -36(%rbp)
# %bb.3:
	movq	-32(%rbp), %rdi
	callq	__cxa_begin_catch
	movq	-16(%rbp), %rsi
	movq	-48(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -72(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
.Ltmp451:
	callq	__cxa_rethrow
.Ltmp452:
	jmp	.LBB425_9
.LBB425_4:
.Ltmp453:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -32(%rbp)
	movl	%edx, -36(%rbp)
.Ltmp454:
	callq	__cxa_end_catch
.Ltmp455:
	jmp	.LBB425_5
.LBB425_5:
	jmp	.LBB425_7
.LBB425_6:
	addq	$80, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB425_7:
	.cfi_def_cfa %rbp, 16
	movq	-32(%rbp), %rdi
	callq	_Unwind_Resume
.LBB425_8:
.Ltmp456:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -76(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.LBB425_9:
.Lfunc_end425:
	.size	_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_, .Lfunc_end425-_ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table425:
.Lexception8:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase7-.Lttbaseref7
.Lttbaseref7:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end8-.Lcst_begin8
.Lcst_begin8:
	.uleb128 .Ltmp448-.Lfunc_begin8 # >> Call Site 1 <<
	.uleb128 .Ltmp449-.Ltmp448      #   Call between .Ltmp448 and .Ltmp449
	.uleb128 .Ltmp450-.Lfunc_begin8 #     jumps to .Ltmp450
	.byte	1                       #   On action: 1
	.uleb128 .Ltmp449-.Lfunc_begin8 # >> Call Site 2 <<
	.uleb128 .Ltmp451-.Ltmp449      #   Call between .Ltmp449 and .Ltmp451
	.byte	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.uleb128 .Ltmp451-.Lfunc_begin8 # >> Call Site 3 <<
	.uleb128 .Ltmp452-.Ltmp451      #   Call between .Ltmp451 and .Ltmp452
	.uleb128 .Ltmp453-.Lfunc_begin8 #     jumps to .Ltmp453
	.byte	0                       #   On action: cleanup
	.uleb128 .Ltmp454-.Lfunc_begin8 # >> Call Site 4 <<
	.uleb128 .Ltmp455-.Ltmp454      #   Call between .Ltmp454 and .Ltmp455
	.uleb128 .Ltmp456-.Lfunc_begin8 #     jumps to .Ltmp456
	.byte	1                       #   On action: 1
	.uleb128 .Ltmp455-.Lfunc_begin8 # >> Call Site 5 <<
	.uleb128 .Lfunc_end425-.Ltmp455 #   Call between .Ltmp455 and .Lfunc_end425
	.byte	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lcst_end8:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase7:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
	movl	%eax, %edx
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rcx
	movq	-16(%rbp), %rsi
	movq	%rcx, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end426:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m, .Lfunc_end426-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rax
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv
	movq	-32(%rbp), %rcx         # 8-byte Reload
	cmpq	%rax, %rcx
	jbe	.LBB427_2
# %bb.1:
	callq	_ZSt17__throw_bad_allocv
.LBB427_2:
	imulq	$40, -16(%rbp), %rdi
	callq	_Znwm
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end427:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv, .Lfunc_end427-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv,comdat
	.weak	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv # -- Begin function _ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv
	.p2align	4, 0x90
	.type	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv,@function
_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv: # @_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movabsq	$230584300921369395, %rax # imm = 0x333333333333333
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end428:
	.size	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv, .Lfunc_end428-_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_ # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	movq	%rsi, -40(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	-40(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end429:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_, .Lfunc_end429-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_ # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end430:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_, .Lfunc_end430-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE,"axG",@progbits,_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE,comdat
	.weak	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE # -- Begin function _ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE,@function
_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE: # @_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end431:
	.size	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE, .Lfunc_end431-_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE,"axG",@progbits,_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE,comdat
	.weak	_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE # -- Begin function _ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE,@function
_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE: # @_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end432:
	.size	_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE, .Lfunc_end432-_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE,"axG",@progbits,_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE,comdat
	.weak	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE # -- Begin function _ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE,@function
_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE: # @_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end433:
	.size	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE, .Lfunc_end433-_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E,"axG",@progbits,_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E,comdat
	.weak	_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E # -- Begin function _ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E
	.p2align	4, 0x90
	.type	_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E,@function
_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E: # @_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end434:
	.size	_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E, .Lfunc_end434-_ZNSt23_Rb_tree_const_iteratorIPN4llvm5ValueEEC2ERKSt17_Rb_tree_iteratorIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE,"axG",@progbits,_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE,comdat
	.weak	_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE # -- Begin function _ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE,@function
_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE: # @_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end435:
	.size	_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE, .Lfunc_end435-_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_,@function
_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_: # @_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end436:
	.size	_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_, .Lfunc_end436-_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,"axG",@progbits,_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,comdat
	.weak	_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_ # -- Begin function _ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,@function
_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_: # @_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB437_1
	jmp	.LBB437_2
.LBB437_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB437_2
.LBB437_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB437_3
	jmp	.LBB437_4
.LBB437_3:
	jmp	.LBB437_5
.LBB437_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$257, %edx              # imm = 0x101
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, %rcx
	callq	__assert_fail
.LBB437_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end437:
	.size	_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, .Lfunc_end437-_ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_,@function
_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_: # @_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end438:
	.size	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_, .Lfunc_end438-_ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_,@function
_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_: # @_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end439:
	.size	_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_, .Lfunc_end439-_ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_ # -- Begin function _ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_,@function
_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_: # @_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB440_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB440_2
.LBB440_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB440_3
	jmp	.LBB440_4
.LBB440_3:
	jmp	.LBB440_5
.LBB440_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$91, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_, %rcx
	callq	__assert_fail
.LBB440_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end440:
	.size	_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_, .Lfunc_end440-_ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_ # -- Begin function _ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_,@function
_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_: # @_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end441:
	.size	_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_, .Lfunc_end441-_ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_,"axG",@progbits,_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_,comdat
	.weak	_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_ # -- Begin function _ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_
	.p2align	4, 0x90
	.type	_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_,@function
_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_: # @_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm3Use3getEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end442:
	.size	_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_, .Lfunc_end442-_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_,@function
_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_: # @_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end443:
	.size	_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_, .Lfunc_end443-_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,"axG",@progbits,_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,comdat
	.weak	_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_ # -- Begin function _ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,@function
_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_: # @_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB444_1
	jmp	.LBB444_2
.LBB444_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB444_2
.LBB444_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB444_3
	jmp	.LBB444_4
.LBB444_3:
	jmp	.LBB444_5
.LBB444_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$257, %edx              # imm = 0x101
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, %rcx
	callq	__assert_fail
.LBB444_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end444:
	.size	_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, .Lfunc_end444-_ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_,@function
_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_: # @_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end445:
	.size	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_, .Lfunc_end445-_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_,@function
_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_: # @_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end446:
	.size	_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_, .Lfunc_end446-_ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_ # -- Begin function _ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_,@function
_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_: # @_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB447_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB447_2
.LBB447_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB447_3
	jmp	.LBB447_4
.LBB447_3:
	jmp	.LBB447_5
.LBB447_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$91, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_, %rcx
	callq	__assert_fail
.LBB447_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end447:
	.size	_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_, .Lfunc_end447-_ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm5Value10getValueIDEv
	cmpl	$3, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end448:
	.size	_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_, .Lfunc_end448-_ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_ # -- Begin function _ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_,@function
_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_: # @_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end449:
	.size	_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_, .Lfunc_end449-_ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end450:
	.size	_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_, .Lfunc_end450-_ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rsi
	leaq	-56(%rbp), %rdi
	movq	%rax, -104(%rbp)        # 8-byte Spill
	callq	_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	movq	-104(%rbp), %rdi        # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	cmpq	$0, -40(%rbp)
	je	.LBB451_2
# %bb.1:
	leaq	-64(%rbp), %rdi
	movq	-104(%rbp), %rsi        # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rdi
	movq	%rsi, -112(%rbp)        # 8-byte Spill
	movq	%rdx, -120(%rbp)        # 8-byte Spill
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	-104(%rbp), %rdi        # 8-byte Reload
	movq	-112(%rbp), %rsi        # 8-byte Reload
	movq	-120(%rbp), %rdx        # 8-byte Reload
	movq	%rax, %rcx
	leaq	-64(%rbp), %r8
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_
	movq	%rax, -72(%rbp)
	movb	$1, -73(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-72(%rbp), %rsi
	leaq	-73(%rbp), %rdx
	callq	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_
	jmp	.LBB451_3
.LBB451_2:
	movq	-48(%rbp), %rsi
	leaq	-88(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	movb	$0, -89(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-88(%rbp), %rsi
	leaq	-89(%rbp), %rdx
	callq	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_
.LBB451_3:
	movq	-16(%rbp), %rax
	movb	-8(%rbp), %dl
	addq	$128, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end451:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_, .Lfunc_end451-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_,"axG",@progbits,_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_,comdat
	.weak	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_ # -- Begin function _ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	.p2align	4, 0x90
	.type	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_,@function
_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_: # @_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE
	movb	(%rax), %cl
	andb	$1, %cl
	movq	-32(%rbp), %rax         # 8-byte Reload
	movb	%cl, 8(%rax)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end452:
	.size	_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_, .Lfunc_end452-_ZNSt4pairISt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEbEC2IRSt17_Rb_tree_iteratorIS3_ERbLb1EEEOT_OT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -88(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	movq	%rax, -40(%rbp)
	movq	-88(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	movq	%rax, -48(%rbp)
	movb	$1, -49(%rbp)
.LBB453_1:                              # =>This Inner Loop Header: Depth=1
	cmpq	$0, -40(%rbp)
	je	.LBB453_6
# %bb.2:                                #   in Loop: Header=BB453_1 Depth=1
	movq	-40(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-88(%rbp), %rax         # 8-byte Reload
	movq	-32(%rbp), %rcx
	movq	(%rcx), %rsi
	movq	-40(%rbp), %rdi
	movq	%rax, -96(%rbp)         # 8-byte Spill
	movq	%rsi, -104(%rbp)        # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	movq	(%rax), %rdx
	movq	-96(%rbp), %rdi         # 8-byte Reload
	movq	-104(%rbp), %rsi        # 8-byte Reload
	callq	_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	andb	$1, %al
	movb	%al, -49(%rbp)
	testb	$1, -49(%rbp)
	je	.LBB453_4
# %bb.3:                                #   in Loop: Header=BB453_1 Depth=1
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	movq	%rax, -112(%rbp)        # 8-byte Spill
	jmp	.LBB453_5
.LBB453_4:                              #   in Loop: Header=BB453_1 Depth=1
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	movq	%rax, -112(%rbp)        # 8-byte Spill
.LBB453_5:                              #   in Loop: Header=BB453_1 Depth=1
	movq	-112(%rbp), %rax        # 8-byte Reload
	movq	%rax, -40(%rbp)
	jmp	.LBB453_1
.LBB453_6:
	movq	-48(%rbp), %rsi
	leaq	-64(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	testb	$1, -49(%rbp)
	je	.LBB453_11
# %bb.7:
	movq	-88(%rbp), %rdi         # 8-byte Reload
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	movq	%rax, -72(%rbp)
	leaq	-64(%rbp), %rdi
	leaq	-72(%rbp), %rsi
	callq	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_
	testb	$1, %al
	jne	.LBB453_8
	jmp	.LBB453_9
.LBB453_8:
	leaq	-16(%rbp), %rdi
	leaq	-40(%rbp), %rsi
	leaq	-48(%rbp), %rdx
	callq	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_
	jmp	.LBB453_14
.LBB453_9:
	leaq	-64(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv
# %bb.10:
	jmp	.LBB453_11
.LBB453_11:
	movq	-88(%rbp), %rax         # 8-byte Reload
	movq	-64(%rbp), %rdi
	movq	%rax, -120(%rbp)        # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	movq	(%rax), %rsi
	movq	-32(%rbp), %rax
	movq	(%rax), %rdx
	movq	-120(%rbp), %rdi        # 8-byte Reload
	callq	_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	testb	$1, %al
	jne	.LBB453_12
	jmp	.LBB453_13
.LBB453_12:
	leaq	-16(%rbp), %rdi
	leaq	-40(%rbp), %rsi
	leaq	-48(%rbp), %rdx
	callq	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_
	jmp	.LBB453_14
.LBB453_13:
	leaq	-64(%rbp), %rsi
	movq	$0, -80(%rbp)
	leaq	-16(%rbp), %rdi
	leaq	-80(%rbp), %rdx
	callq	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_
.LBB453_14:
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	$128, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end453:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_, .Lfunc_end453-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_,"axG",@progbits,_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_,comdat
	.weak	_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_ # -- Begin function _ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	.p2align	4, 0x90
	.type	_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_,@function
_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_: # @_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end454:
	.size	_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_, .Lfunc_end454-_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end455:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_, .Lfunc_end455-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeC2ERS8_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	%rcx, -40(%rbp)
	movq	%r8, -48(%rbp)
	movq	-16(%rbp), %rax
	cmpq	$0, -24(%rbp)
	movb	$1, %r9b
	movq	%rax, -72(%rbp)         # 8-byte Spill
	movb	%r9b, -73(%rbp)         # 1-byte Spill
	jne	.LBB456_3
# %bb.1:
	movq	-32(%rbp), %rax
	movq	-72(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -88(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	movq	-88(%rbp), %rcx         # 8-byte Reload
	cmpq	%rax, %rcx
	movb	$1, %dl
	movb	%dl, -73(%rbp)          # 1-byte Spill
	je	.LBB456_3
# %bb.2:
	movq	-72(%rbp), %rax         # 8-byte Reload
	movq	-40(%rbp), %rsi
	leaq	-56(%rbp), %rdi
	movq	%rax, -96(%rbp)         # 8-byte Spill
	callq	_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	movq	(%rax), %rsi
	movq	-32(%rbp), %rdi
	movq	%rsi, -104(%rbp)        # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	movq	(%rax), %rdx
	movq	-96(%rbp), %rdi         # 8-byte Reload
	movq	-104(%rbp), %rsi        # 8-byte Reload
	callq	_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	movb	%al, -73(%rbp)          # 1-byte Spill
.LBB456_3:
	movb	-73(%rbp), %al          # 1-byte Reload
	andb	$1, %al
	movb	%al, -49(%rbp)
	movq	-48(%rbp), %rdi
	movq	-40(%rbp), %rcx
	movq	%rdi, -112(%rbp)        # 8-byte Spill
	movq	%rcx, %rdi
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	-112(%rbp), %rdi        # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	movq	%rax, -64(%rbp)
	movb	-49(%rbp), %dl
	movq	-64(%rbp), %rax
	movq	-32(%rbp), %rcx
	movq	-72(%rbp), %rsi         # 8-byte Reload
	addq	$8, %rsi
	andb	$1, %dl
	movzbl	%dl, %edi
	movq	%rsi, -120(%rbp)        # 8-byte Spill
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movq	-120(%rbp), %rcx        # 8-byte Reload
	callq	_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
	movq	-72(%rbp), %rax         # 8-byte Reload
	movq	40(%rax), %rcx
	addq	$1, %rcx
	movq	%rcx, 40(%rax)
	movq	-64(%rbp), %rcx
	leaq	-8(%rbp), %rdi
	movq	%rcx, %rsi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	movq	-8(%rbp), %rax
	addq	$128, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end456:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_, .Lfunc_end456-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE,"axG",@progbits,_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE,comdat
	.weak	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE # -- Begin function _ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE,@function
_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE: # @_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end457:
	.size	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE, .Lfunc_end457-_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_,"axG",@progbits,_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_,comdat
	.weak	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_ # -- Begin function _ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_
	.p2align	4, 0x90
	.type	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_,@function
_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_: # @_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE
	movb	(%rax), %r8b
	andb	$1, %r8b
	movq	-32(%rbp), %rax         # 8-byte Reload
	movb	%r8b, 8(%rax)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end458:
	.size	_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_, .Lfunc_end458-_ZNSt4pairISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEbEC2IS4_bLb1EEEOT_OT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base # -- Begin function _ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base,@function
_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base: # @_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end459:
	.size	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base, .Lfunc_end459-_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end460:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv, .Lfunc_end460-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_,"axG",@progbits,_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_,comdat
	.weak	_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_ # -- Begin function _ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	.p2align	4, 0x90
	.type	_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_,@function
_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_: # @_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rcx
	cmpq	%rcx, %rax
	setb	%r8b
	andb	$1, %r8b
	movzbl	%r8b, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end461:
	.size	_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_, .Lfunc_end461-_ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	leaq	-16(%rbp), %rdi
	movq	%rax, %rsi
	callq	_ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end462:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E, .Lfunc_end462-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_,"axG",@progbits,_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_,comdat
	.weak	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_ # -- Begin function _ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_
	.p2align	4, 0x90
	.type	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_,@function
_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_: # @_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	cmpq	(%rcx), %rax
	sete	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end463:
	.size	_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_, .Lfunc_end463-_ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rsi
	leaq	-8(%rbp), %rdi
	callq	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEC2EPSt18_Rb_tree_node_base
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end464:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv, .Lfunc_end464-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_,"axG",@progbits,_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_,comdat
	.weak	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_ # -- Begin function _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_
	.p2align	4, 0x90
	.type	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_,@function
_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_: # @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, 8(%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end465:
	.size	_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_, .Lfunc_end465-_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEERS1_Lb1EEEOT_OT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv,"axG",@progbits,_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv,comdat
	.weak	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv # -- Begin function _ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv
	.p2align	4, 0x90
	.type	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv,@function
_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv: # @_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base
	movq	-16(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	movq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end466:
	.size	_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv, .Lfunc_end466-_ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end467:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base, .Lfunc_end467-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv,"axG",@progbits,_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv,comdat
	.weak	_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv # -- Begin function _ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.p2align	4, 0x90
	.type	_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv,@function
_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv: # @_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdi
	callq	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end468:
	.size	_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv, .Lfunc_end468-_ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv,"axG",@progbits,_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv,comdat
	.weak	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv # -- Begin function _ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.p2align	4, 0x90
	.type	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv,@function
_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv: # @_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end469:
	.size	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv, .Lfunc_end469-_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv,"axG",@progbits,_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv,comdat
	.weak	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv # -- Begin function _ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.p2align	4, 0x90
	.type	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv,@function
_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv: # @_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end470:
	.size	_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv, .Lfunc_end470-_ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE,"axG",@progbits,_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE,comdat
	.weak	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE # -- Begin function _ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE,@function
_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE: # @_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end471:
	.size	_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE, .Lfunc_end471-_ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_,"axG",@progbits,_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_,comdat
	.weak	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_ # -- Begin function _ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.p2align	4, 0x90
	.type	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_,@function
_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_: # @_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	movq	-16(%rbp), %rax
	movq	%rdi, -24(%rbp)         # 8-byte Spill
	movq	%rax, %rdi
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	-24(%rbp), %rdi         # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end472:
	.size	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_, .Lfunc_end472-_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rsi, -40(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	-40(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	movq	-24(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end473:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_, .Lfunc_end473-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	%rax, %rdi
	movl	$1, %esi
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end474:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv, .Lfunc_end474-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_,"axG",@progbits,_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_,comdat
	.weak	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_ # -- Begin function _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	.p2align	4, 0x90
	.type	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_,@function
_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_: # @_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
.Lfunc_begin9:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception9
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	movq	-16(%rbp), %rdi
.Ltmp457:
	movq	%rax, -56(%rbp)         # 8-byte Spill
	callq	_ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
.Ltmp458:
	movq	%rax, -64(%rbp)         # 8-byte Spill
	jmp	.LBB475_1
.LBB475_1:
	movq	-24(%rbp), %rdi
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	-56(%rbp), %rdi         # 8-byte Reload
	movq	-64(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_
	jmp	.LBB475_6
.LBB475_2:
.Ltmp459:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -32(%rbp)
	movl	%edx, -36(%rbp)
# %bb.3:
	movq	-32(%rbp), %rdi
	callq	__cxa_begin_catch
	movq	-16(%rbp), %rsi
	movq	-48(%rbp), %rdi         # 8-byte Reload
	movq	%rax, -72(%rbp)         # 8-byte Spill
	callq	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
.Ltmp460:
	callq	__cxa_rethrow
.Ltmp461:
	jmp	.LBB475_9
.LBB475_4:
.Ltmp462:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, -32(%rbp)
	movl	%edx, -36(%rbp)
.Ltmp463:
	callq	__cxa_end_catch
.Ltmp464:
	jmp	.LBB475_5
.LBB475_5:
	jmp	.LBB475_7
.LBB475_6:
	addq	$80, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB475_7:
	.cfi_def_cfa %rbp, 16
	movq	-32(%rbp), %rdi
	callq	_Unwind_Resume
.LBB475_8:
.Ltmp465:
                                        # kill: def $edx killed $edx killed $rdx
	movq	%rax, %rdi
	movl	%edx, -76(%rbp)         # 4-byte Spill
	callq	__clang_call_terminate
.LBB475_9:
.Lfunc_end475:
	.size	_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_, .Lfunc_end475-_ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table475:
.Lexception9:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.uleb128 .Lttbase8-.Lttbaseref8
.Lttbaseref8:
	.byte	1                       # Call site Encoding = uleb128
	.uleb128 .Lcst_end9-.Lcst_begin9
.Lcst_begin9:
	.uleb128 .Ltmp457-.Lfunc_begin9 # >> Call Site 1 <<
	.uleb128 .Ltmp458-.Ltmp457      #   Call between .Ltmp457 and .Ltmp458
	.uleb128 .Ltmp459-.Lfunc_begin9 #     jumps to .Ltmp459
	.byte	1                       #   On action: 1
	.uleb128 .Ltmp458-.Lfunc_begin9 # >> Call Site 2 <<
	.uleb128 .Ltmp460-.Ltmp458      #   Call between .Ltmp458 and .Ltmp460
	.byte	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.uleb128 .Ltmp460-.Lfunc_begin9 # >> Call Site 3 <<
	.uleb128 .Ltmp461-.Ltmp460      #   Call between .Ltmp460 and .Ltmp461
	.uleb128 .Ltmp462-.Lfunc_begin9 #     jumps to .Ltmp462
	.byte	0                       #   On action: cleanup
	.uleb128 .Ltmp463-.Lfunc_begin9 # >> Call Site 4 <<
	.uleb128 .Ltmp464-.Ltmp463      #   Call between .Ltmp463 and .Ltmp464
	.uleb128 .Ltmp465-.Lfunc_begin9 #     jumps to .Ltmp465
	.byte	1                       #   On action: 1
	.uleb128 .Ltmp464-.Lfunc_begin9 # >> Call Site 5 <<
	.uleb128 .Lfunc_end475-.Ltmp464 #   Call between .Ltmp464 and .Lfunc_end475
	.byte	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lcst_end9:
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
	.p2align	2
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
.Lttbase8:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
	movl	%eax, %edx
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rcx
	movq	-16(%rbp), %rsi
	movq	%rcx, %rdi
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end476:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m, .Lfunc_end476-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rax
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv
	movq	-32(%rbp), %rcx         # 8-byte Reload
	cmpq	%rax, %rcx
	jbe	.LBB477_2
# %bb.1:
	callq	_ZSt17__throw_bad_allocv
.LBB477_2:
	imulq	$40, -16(%rbp), %rdi
	callq	_Znwm
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end477:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv, .Lfunc_end477-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv,comdat
	.weak	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv # -- Begin function _ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv
	.p2align	4, 0x90
	.type	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv,@function
_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv: # @_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movabsq	$230584300921369395, %rax # imm = 0x333333333333333
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end478:
	.size	_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv, .Lfunc_end478-_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_,"axG",@progbits,_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_,comdat
	.weak	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_ # -- Begin function _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_
	.p2align	4, 0x90
	.type	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_,@function
_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_: # @_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	movq	%rsi, -40(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	-32(%rbp), %rdi         # 8-byte Reload
	movq	-40(%rbp), %rsi         # 8-byte Reload
	movq	%rax, %rdx
	callq	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end479:
	.size	_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_, .Lfunc_end479-_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_,comdat
	.weak	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_ # -- Begin function _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_
	.p2align	4, 0x90
	.type	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_,@function
_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_: # @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdi
	movq	%rax, -32(%rbp)         # 8-byte Spill
	callq	_ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx         # 8-byte Reload
	movq	%rax, (%rcx)
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end480:
	.size	_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_, .Lfunc_end480-_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE,"axG",@progbits,_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE,comdat
	.weak	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE # -- Begin function _ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE,@function
_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE: # @_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end481:
	.size	_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE, .Lfunc_end481-_ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE,"axG",@progbits,_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE,comdat
	.weak	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE # -- Begin function _ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE
	.p2align	4, 0x90
	.type	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE,@function
_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE: # @_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end482:
	.size	_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE, .Lfunc_end482-_ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E,"axG",@progbits,_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E,comdat
	.weak	_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E # -- Begin function _ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E
	.p2align	4, 0x90
	.type	_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E,@function
_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E: # @_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end483:
	.size	_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E, .Lfunc_end483-_ZNSt23_Rb_tree_const_iteratorIPN4llvm14GlobalVariableEEC2ERKSt17_Rb_tree_iteratorIS2_E
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_,"axG",@progbits,_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_,comdat
	.weak	_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_ # -- Begin function _ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_
	.p2align	4, 0x90
	.type	_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_,@function
_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_: # @_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end484:
	.size	_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_, .Lfunc_end484-_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,"axG",@progbits,_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,comdat
	.weak	_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_ # -- Begin function _ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.p2align	4, 0x90
	.type	_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@function
_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_: # @_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_
	xorl	%ecx, %ecx
                                        # kill: def $cl killed $cl killed $ecx
	testb	$1, %al
	movb	%cl, -9(%rbp)           # 1-byte Spill
	jne	.LBB485_1
	jmp	.LBB485_2
.LBB485_1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB485_2
.LBB485_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB485_3
	jmp	.LBB485_4
.LBB485_3:
	jmp	.LBB485_5
.LBB485_4:
	movabsq	$.L.str.62, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$264, %edx              # imm = 0x108
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, %rcx
	callq	__assert_fail
.LBB485_5:
	leaq	-8(%rbp), %rdi
	callq	_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end485:
	.size	_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, .Lfunc_end485-_ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_,@function
_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_: # @_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end486:
	.size	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_, .Lfunc_end486-_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_,"axG",@progbits,_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_,comdat
	.weak	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_ # -- Begin function _ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.p2align	4, 0x90
	.type	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_,@function
_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_: # @_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	callq	_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end487:
	.size	_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_, .Lfunc_end487-_ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_,"axG",@progbits,_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_,comdat
	.weak	_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_ # -- Begin function _ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_
	.p2align	4, 0x90
	.type	_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_,@function
_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_: # @_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	movb	%al, -9(%rbp)           # 1-byte Spill
	je	.LBB488_2
# %bb.1:
	movb	$1, %al
	movb	%al, -9(%rbp)           # 1-byte Spill
	jmp	.LBB488_2
.LBB488_2:
	movb	-9(%rbp), %al           # 1-byte Reload
	testb	$1, %al
	jne	.LBB488_3
	jmp	.LBB488_4
.LBB488_3:
	jmp	.LBB488_5
.LBB488_4:
	movabsq	$.L.str.59, %rdi
	movabsq	$.L.str.60, %rsi
	movl	$105, %edx
	movabsq	$.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_, %rcx
	callq	__assert_fail
.LBB488_5:
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end488:
	.size	_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_, .Lfunc_end488-_ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_,"axG",@progbits,_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_,comdat
	.weak	_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_ # -- Begin function _ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_
	.p2align	4, 0x90
	.type	_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_,@function
_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_: # @_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end489:
	.size	_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_, .Lfunc_end489-_ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE,"axG",@progbits,_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE,comdat
	.weak	_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE # -- Begin function _ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE
	.p2align	4, 0x90
	.type	_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE,@function
_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE: # @_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ZNK4llvm11Instruction9getOpcodeEv
	cmpl	$34, %eax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end490:
	.size	_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE, .Lfunc_end490-_ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_,"axG",@progbits,_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_,comdat
	.weak	_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_ # -- Begin function _ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_
	.p2align	4, 0x90
	.type	_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_,@function
_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_: # @_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end491:
	.size	_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_, .Lfunc_end491-_ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv,"axG",@progbits,_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv,comdat
	.weak	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv # -- Begin function _ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.p2align	4, 0x90
	.type	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv,@function
_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv: # @_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end492:
	.size	_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv, .Lfunc_end492-_ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv,"axG",@progbits,_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv,comdat
	.weak	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv # -- Begin function _ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.p2align	4, 0x90
	.type	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv,@function
_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv: # @_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end493:
	.size	_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv, .Lfunc_end493-_ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.cfi_endproc
                                        # -- End function
	.hidden	_ZN4llvm30VerifyDisableABIBreakingChecksE # @_ZN4llvm30VerifyDisableABIBreakingChecksE
	.type	_ZN4llvm30VerifyDisableABIBreakingChecksE,@object
	.data
	.weak	_ZN4llvm30VerifyDisableABIBreakingChecksE
	.p2align	3
_ZN4llvm30VerifyDisableABIBreakingChecksE:
	.quad	_ZN4llvm24DisableABIBreakingChecksE
	.size	_ZN4llvm30VerifyDisableABIBreakingChecksE, 8

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	":"
	.size	.L.str, 2

	.type	.L.str.1,@object        # @.str.1
.L.str.1:
	.asciz	"\n  f01_totalBasicBlocks: "
	.size	.L.str.1, 26

	.type	.L.str.2,@object        # @.str.2
.L.str.2:
	.asciz	"\n  f02_oneSuccessor: "
	.size	.L.str.2, 22

	.type	.L.str.3,@object        # @.str.3
.L.str.3:
	.asciz	"\n  f03_twoSuccessor: "
	.size	.L.str.3, 22

	.type	.L.str.4,@object        # @.str.4
.L.str.4:
	.asciz	"\n  f04_greaterTwoSuccessor: "
	.size	.L.str.4, 29

	.type	.L.str.5,@object        # @.str.5
.L.str.5:
	.asciz	"\n  f05_onePredecessor: "
	.size	.L.str.5, 24

	.type	.L.str.6,@object        # @.str.6
.L.str.6:
	.asciz	"\n  f06_twoPredecessor: "
	.size	.L.str.6, 24

	.type	.L.str.7,@object        # @.str.7
.L.str.7:
	.asciz	"\n  f07_greaterTwoPredecessor: "
	.size	.L.str.7, 31

	.type	.L.str.8,@object        # @.str.8
.L.str.8:
	.asciz	"\n  f08_onePredSuc: "
	.size	.L.str.8, 20

	.type	.L.str.9,@object        # @.str.9
.L.str.9:
	.asciz	"\n  f09_onePred_twoSuc: "
	.size	.L.str.9, 24

	.type	.L.str.10,@object       # @.str.10
.L.str.10:
	.asciz	"\n  f10_twoPred_oneSuc: "
	.size	.L.str.10, 24

	.type	.L.str.11,@object       # @.str.11
.L.str.11:
	.asciz	"\n  f11_twoPredSuc: "
	.size	.L.str.11, 20

	.type	.L.str.12,@object       # @.str.12
.L.str.12:
	.asciz	"\n  f12_greaterTwoPredSuc: "
	.size	.L.str.12, 27

	.type	.L.str.13,@object       # @.str.13
.L.str.13:
	.asciz	"\n  f13_instructionLess15: "
	.size	.L.str.13, 27

	.type	.L.str.14,@object       # @.str.14
.L.str.14:
	.asciz	"\n  f14_instructionInterval: "
	.size	.L.str.14, 29

	.type	.L.str.15,@object       # @.str.15
.L.str.15:
	.asciz	"\n  f15_instructionGreater500: "
	.size	.L.str.15, 31

	.type	.L.str.16,@object       # @.str.16
.L.str.16:
	.asciz	"\n  f16_numOfEdges: "
	.size	.L.str.16, 20

	.type	.L.str.17,@object       # @.str.17
.L.str.17:
	.asciz	"\n  f17_numOfCriticalEdges: "
	.size	.L.str.17, 28

	.type	.L.str.18,@object       # @.str.18
.L.str.18:
	.asciz	"\n  f18_abnormalEdge: "
	.size	.L.str.18, 22

	.type	.L.str.19,@object       # @.str.19
.L.str.19:
	.asciz	"\n  f19_directCalls: "
	.size	.L.str.19, 21

	.type	.L.str.20,@object       # @.str.20
.L.str.20:
	.asciz	"\n  f20_condBranch: "
	.size	.L.str.20, 20

	.type	.L.str.21,@object       # @.str.21
.L.str.21:
	.asciz	"\n  f21_assigmentInstructions: "
	.size	.L.str.21, 31

	.type	.L.str.22,@object       # @.str.22
.L.str.22:
	.asciz	"\n  f22_uncondBranch: "
	.size	.L.str.22, 22

	.type	.L.str.23,@object       # @.str.23
.L.str.23:
	.asciz	"\n  f23_numOfIntOperations: "
	.size	.L.str.23, 28

	.type	.L.str.24,@object       # @.str.24
.L.str.24:
	.asciz	"\n  f24_numOfFloatOperations: "
	.size	.L.str.24, 30

	.type	.L.str.25,@object       # @.str.25
.L.str.25:
	.asciz	"\n  f25_numInstructions: "
	.size	.L.str.25, 25

	.type	.L.str.26,@object       # @.str.26
.L.str.26:
	.asciz	"\n  f26_instructionAverage: "
	.size	.L.str.26, 28

	.type	.L.str.27,@object       # @.str.27
.L.str.27:
	.asciz	"\n  f27_averagePhi: "
	.size	.L.str.27, 20

	.type	.L.str.28,@object       # @.str.28
.L.str.28:
	.asciz	"\n  f28_averagePhiArgs: "
	.size	.L.str.28, 24

	.type	.L.str.29,@object       # @.str.29
.L.str.29:
	.asciz	"\n  f29_blockWithoutPhi: "
	.size	.L.str.29, 25

	.type	.L.str.30,@object       # @.str.30
.L.str.30:
	.asciz	"\n  f30_blockPhiIntervalNodes: "
	.size	.L.str.30, 31

	.type	.L.str.31,@object       # @.str.31
.L.str.31:
	.asciz	"\n  f31_blockPhiGreater3Nodes: "
	.size	.L.str.31, 31

	.type	.L.str.32,@object       # @.str.32
.L.str.32:
	.asciz	"\n  f32_blocksPhiGreater5Arg: "
	.size	.L.str.32, 30

	.type	.L.str.33,@object       # @.str.33
.L.str.33:
	.asciz	"\n  f33_blocksPhiIntervalArg: "
	.size	.L.str.33, 30

	.type	.L.str.34,@object       # @.str.34
.L.str.34:
	.asciz	"\n  f34_numOfSwitchInstruction: "
	.size	.L.str.34, 32

	.type	.L.str.35,@object       # @.str.35
.L.str.35:
	.asciz	"\n  f35_numOfUnaryOperations: "
	.size	.L.str.35, 30

	.type	.L.str.36,@object       # @.str.36
.L.str.36:
	.asciz	"\n  f36_ptrArithmetic: "
	.size	.L.str.36, 23

	.type	.L.str.37,@object       # @.str.37
.L.str.37:
	.asciz	"\n  f37_indirectRefs: "
	.size	.L.str.37, 22

	.type	.L.str.38,@object       # @.str.38
.L.str.38:
	.asciz	"\n  f38_addresVar: "
	.size	.L.str.38, 19

	.type	.L.str.39,@object       # @.str.39
.L.str.39:
	.asciz	"\n  f39_addressFunction: "
	.size	.L.str.39, 25

	.type	.L.str.40,@object       # @.str.40
.L.str.40:
	.asciz	"\n  f40_indirectCalls: "
	.size	.L.str.40, 23

	.type	.L.str.41,@object       # @.str.41
.L.str.41:
	.asciz	"\n  f41_leftOpIntConst: "
	.size	.L.str.41, 24

	.type	.L.str.42,@object       # @.str.42
.L.str.42:
	.asciz	"\n  f42_oneOperandConst: "
	.size	.L.str.42, 25

	.type	.L.str.43,@object       # @.str.43
.L.str.43:
	.asciz	"\n  f43_callArgPtrType: "
	.size	.L.str.43, 24

	.type	.L.str.44,@object       # @.str.44
.L.str.44:
	.asciz	"\n  f44_call4args: "
	.size	.L.str.44, 19

	.type	.L.str.45,@object       # @.str.45
.L.str.45:
	.asciz	"\n  f45_ptrRetCallType: "
	.size	.L.str.45, 24

	.type	.L.str.46,@object       # @.str.46
.L.str.46:
	.asciz	"\n  f46_intRetCallType: "
	.size	.L.str.46, 24

	.type	.L.str.47,@object       # @.str.47
.L.str.47:
	.asciz	"\n  f47_constInt0: "
	.size	.L.str.47, 19

	.type	.L.str.48,@object       # @.str.48
.L.str.48:
	.asciz	"\n  f48_constInt32bits: "
	.size	.L.str.48, 24

	.type	.L.str.49,@object       # @.str.49
.L.str.49:
	.asciz	"\n  f49_constInt1: "
	.size	.L.str.49, 19

	.type	.L.str.50,@object       # @.str.50
.L.str.50:
	.asciz	"\n  f50_constInt64bits: "
	.size	.L.str.50, 24

	.type	.L.str.51,@object       # @.str.51
.L.str.51:
	.asciz	"\n  f51_numRefeOfLocalVar: "
	.size	.L.str.51, 27

	.type	.L.str.52,@object       # @.str.52
.L.str.52:
	.asciz	"\n  f52_defUseCounter: "
	.size	.L.str.52, 23

	.type	.L.str.53,@object       # @.str.53
.L.str.53:
	.asciz	"\n  f53_refLocalVariable: "
	.size	.L.str.53, 26

	.type	.L.str.54,@object       # @.str.54
.L.str.54:
	.asciz	"\n  f54_refExterVariable: "
	.size	.L.str.54, 26

	.type	.L.str.55,@object       # @.str.55
.L.str.55:
	.asciz	"\n  f55_localPtrVar: "
	.size	.L.str.55, 21

	.type	.L.str.56,@object       # @.str.56
.L.str.56:
	.asciz	"\n  f56_staticPtrVar: "
	.size	.L.str.56, 22

	.type	.L.str.57,@object       # @.str.57
.L.str.57:
	.asciz	"\n"
	.size	.L.str.57, 2

	.type	.L.str.58,@object       # @.str.58
.L.str.58:
	.asciz	"isa<> used on a null pointer"
	.size	.L.str.58, 29

	.type	.L.str.59,@object       # @.str.59
.L.str.59:
	.asciz	"Val && \"isa<> used on a null pointer\""
	.size	.L.str.59, 38

	.type	.L.str.60,@object       # @.str.60
.L.str.60:
	.asciz	"/usr/include/llvm/Support/Casting.h"
	.size	.L.str.60, 36

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::Instruction, const llvm::User *>::doit(const From *) [To = llvm::Instruction, From = const llvm::User *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_, 141

	.type	.L.str.61,@object       # @.str.61
.L.str.61:
	.asciz	"cast<Ty>() argument of incompatible type!"
	.size	.L.str.61, 42

	.type	.L.str.62,@object       # @.str.62
.L.str.62:
	.asciz	"isa<X>(Val) && \"cast<Ty>() argument of incompatible type!\""
	.size	.L.str.62, 59

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::Instruction, Y = llvm::User]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 94

	.type	.L.str.63,@object       # @.str.63
.L.str.63:
	.asciz	"Cannot dereference end iterator!"
	.size	.L.str.63, 33

	.type	.L.str.64,@object       # @.str.64
.L.str.64:
	.asciz	"U && \"Cannot dereference end iterator!\""
	.size	.L.str.64, 40

	.type	.L.str.65,@object       # @.str.65
.L.str.65:
	.asciz	"/usr/include/llvm/IR/Value.h"
	.size	.L.str.65, 29

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv
.L__PRETTY_FUNCTION__._ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv:
	.asciz	"UseT &llvm::Value::use_iterator_impl<llvm::Use>::operator*() const [UseT = llvm::Use]"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv, 86

	.type	.L.str.66,@object       # @.str.66
.L.str.66:
	.asciz	"Cannot increment end iterator!"
	.size	.L.str.66, 31

	.type	.L.str.67,@object       # @.str.67
.L.str.67:
	.asciz	"U && \"Cannot increment end iterator!\""
	.size	.L.str.67, 38

	.type	.L__PRETTY_FUNCTION__._ZN4llvm5Value17use_iterator_implINS_3UseEEppEv,@object # @__PRETTY_FUNCTION__._ZN4llvm5Value17use_iterator_implINS_3UseEEppEv
.L__PRETTY_FUNCTION__._ZN4llvm5Value17use_iterator_implINS_3UseEEppEv:
	.asciz	"use_iterator_impl<UseT> &llvm::Value::use_iterator_impl<llvm::Use>::operator++() [UseT = llvm::Use]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm5Value17use_iterator_implINS_3UseEEppEv, 100

	.type	.L.str.68,@object       # @.str.68
.L.str.68:
	.asciz	"getOperand() out of range!"
	.size	.L.str.68, 27

	.type	.L.str.69,@object       # @.str.69
.L.str.69:
	.asciz	"i < NumUserOperands && \"getOperand() out of range!\""
	.size	.L.str.69, 52

	.type	.L.str.70,@object       # @.str.70
.L.str.70:
	.asciz	"/usr/include/llvm/IR/User.h"
	.size	.L.str.70, 28

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm4User10getOperandEj,@object # @__PRETTY_FUNCTION__._ZNK4llvm4User10getOperandEj
.L__PRETTY_FUNCTION__._ZNK4llvm4User10getOperandEj:
	.asciz	"llvm::Value *llvm::User::getOperand(unsigned int) const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm4User10getOperandEj, 56

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::Function, Y = llvm::Value]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 92

	.type	.L.str.71,@object       # @.str.71
.L.str.71:
	.asciz	"Invalid opcode!"
	.size	.L.str.71, 16

	.type	.L.str.72,@object       # @.str.72
.L.str.72:
	.asciz	"/usr/include/llvm/IR/InstrTypes.h"
	.size	.L.str.72, 34

	.type	.L.str.73,@object       # @.str.73
.L.str.73:
	.asciz	"Should be!"
	.size	.L.str.73, 11

	.type	.L.str.74,@object       # @.str.74
.L.str.74:
	.asciz	"Begin <= End && \"Should be!\""
	.size	.L.str.74, 29

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getNumTotalBundleOperandsEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getNumTotalBundleOperandsEv
.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getNumTotalBundleOperandsEv:
	.asciz	"unsigned int llvm::CallBase::getNumTotalBundleOperands() const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getNumTotalBundleOperandsEv, 63

	.type	.L.str.75,@object       # @.str.75
.L.str.75:
	.asciz	"Don't call otherwise!"
	.size	.L.str.75, 22

	.type	.L.str.76,@object       # @.str.76
.L.str.76:
	.asciz	"hasOperandBundles() && \"Don't call otherwise!\""
	.size	.L.str.76, 47

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase27getBundleOperandsStartIndexEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm8CallBase27getBundleOperandsStartIndexEv
.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase27getBundleOperandsStartIndexEv:
	.asciz	"unsigned int llvm::CallBase::getBundleOperandsStartIndex() const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase27getBundleOperandsStartIndexEv, 65

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getBundleOperandsEndIndexEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getBundleOperandsEndIndexEv
.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getBundleOperandsEndIndexEv:
	.asciz	"unsigned int llvm::CallBase::getBundleOperandsEndIndex() const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase25getBundleOperandsEndIndexEv, 63

	.type	.L.str.77,@object       # @.str.77
.L.str.77:
	.asciz	"Out of bounds!"
	.size	.L.str.77, 15

	.type	.L.str.78,@object       # @.str.78
.L.str.78:
	.asciz	"i < getNumArgOperands() && \"Out of bounds!\""
	.size	.L.str.78, 44

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase13getArgOperandEj,@object # @__PRETTY_FUNCTION__._ZNK4llvm8CallBase13getArgOperandEj
.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase13getArgOperandEj:
	.asciz	"llvm::Value *llvm::CallBase::getArgOperand(unsigned int) const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase13getArgOperandEj, 63

	.type	.L.str.79,@object       # @.str.79
.L.str.79:
	.asciz	"i_nocapture < OperandTraits<CallBase>::operands(this) && \"getOperand() out of range!\""
	.size	.L.str.79, 86

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase10getOperandEj,@object # @__PRETTY_FUNCTION__._ZNK4llvm8CallBase10getOperandEj
.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase10getOperandEj:
	.asciz	"llvm::Value *llvm::CallBase::getOperand(unsigned int) const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm8CallBase10getOperandEj, 60

	.type	.L.str.80,@object       # @.str.80
.L.str.80:
	.asciz	"cast_or_null<Ty>() argument of incompatible type!"
	.size	.L.str.80, 50

	.type	.L.str.81,@object       # @.str.81
.L.str.81:
	.asciz	"isa<X>(Val) && \"cast_or_null<Ty>() argument of incompatible type!\""
	.size	.L.str.81, 67

	.type	.L__PRETTY_FUNCTION__._ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,@object # @__PRETTY_FUNCTION__._ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
.L__PRETTY_FUNCTION__._ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast_or_null(Y *) [X = llvm::Value, Y = llvm::Value]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_, 97

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::Value, const llvm::Value *>::doit(const From *) [To = llvm::Value, From = const llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_, 131

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::Value, Y = llvm::Value]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_, 89

	.type	.L.str.82,@object       # @.str.82
.L.str.82:
	.asciz	"i_nocapture < OperandTraits<BinaryOperator>::operands(this) && \"getOperand() out of range!\""
	.size	.L.str.82, 92

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm14BinaryOperator10getOperandEj,@object # @__PRETTY_FUNCTION__._ZNK4llvm14BinaryOperator10getOperandEj
.L__PRETTY_FUNCTION__._ZNK4llvm14BinaryOperator10getOperandEj:
	.asciz	"llvm::Value *llvm::BinaryOperator::getOperand(unsigned int) const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm14BinaryOperator10getOperandEj, 66

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::IntegerType, Y = llvm::Type]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 94

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::IntegerType, const llvm::Type *>::doit(const From *) [To = llvm::IntegerType, From = const llvm::Type *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_, 141

	.type	.L.str.83,@object       # @.str.83
.L.str.83:
	.asciz	"Too many bits for int64_t"
	.size	.L.str.83, 26

	.type	.L.str.84,@object       # @.str.84
.L.str.84:
	.asciz	"getMinSignedBits() <= 64 && \"Too many bits for int64_t\""
	.size	.L.str.84, 56

	.type	.L.str.85,@object       # @.str.85
.L.str.85:
	.asciz	"/usr/include/llvm/ADT/APInt.h"
	.size	.L.str.85, 30

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm5APInt12getSExtValueEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm5APInt12getSExtValueEv
.L__PRETTY_FUNCTION__._ZNK4llvm5APInt12getSExtValueEv:
	.asciz	"int64_t llvm::APInt::getSExtValue() const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm5APInt12getSExtValueEv, 42

	.type	.L.str.86,@object       # @.str.86
.L.str.86:
	.asciz	"Bit width can't be 0."
	.size	.L.str.86, 22

	.type	.L.str.87,@object       # @.str.87
.L.str.87:
	.asciz	"B > 0 && \"Bit width can't be 0.\""
	.size	.L.str.87, 33

	.type	.L.str.88,@object       # @.str.88
.L.str.88:
	.asciz	"/usr/include/llvm/Support/MathExtras.h"
	.size	.L.str.88, 39

	.type	.L__PRETTY_FUNCTION__._ZN4llvm12SignExtend64Emj,@object # @__PRETTY_FUNCTION__._ZN4llvm12SignExtend64Emj
.L__PRETTY_FUNCTION__._ZN4llvm12SignExtend64Emj:
	.asciz	"int64_t llvm::SignExtend64(uint64_t, unsigned int)"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm12SignExtend64Emj, 51

	.type	.L.str.89,@object       # @.str.89
.L.str.89:
	.asciz	"Bit width out of range."
	.size	.L.str.89, 24

	.type	.L.str.90,@object       # @.str.90
.L.str.90:
	.asciz	"B <= 64 && \"Bit width out of range.\""
	.size	.L.str.90, 37

	.type	.L.str.91,@object       # @.str.91
.L.str.91:
	.asciz	"Bit position out of bounds!"
	.size	.L.str.91, 28

	.type	.L.str.92,@object       # @.str.92
.L.str.92:
	.asciz	"bitPosition < getBitWidth() && \"Bit position out of bounds!\""
	.size	.L.str.92, 61

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm5APIntixEj,@object # @__PRETTY_FUNCTION__._ZNK4llvm5APIntixEj
.L__PRETTY_FUNCTION__._ZNK4llvm5APIntixEj:
	.asciz	"bool llvm::APInt::operator[](unsigned int) const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm5APIntixEj, 49

	.type	.L.str.93,@object       # @.str.93
.L.str.93:
	.asciz	"i_nocapture < OperandTraits<GlobalVariable>::operands(this) && \"getOperand() out of range!\""
	.size	.L.str.93, 92

	.type	.L.str.94,@object       # @.str.94
.L.str.94:
	.asciz	"/usr/include/llvm/IR/GlobalVariable.h"
	.size	.L.str.94, 38

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm14GlobalVariable10getOperandEj,@object # @__PRETTY_FUNCTION__._ZNK4llvm14GlobalVariable10getOperandEj
.L__PRETTY_FUNCTION__._ZNK4llvm14GlobalVariable10getOperandEj:
	.asciz	"llvm::Value *llvm::GlobalVariable::getOperand(unsigned int) const"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm14GlobalVariable10getOperandEj, 66

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::PHINode, const llvm::Instruction *>::doit(const From *) [To = llvm::PHINode, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_, 147

	.type	.L.str.95,@object       # @.str.95
.L.str.95:
	.asciz	"!NodePtr->isKnownSentinel()"
	.size	.L.str.95, 28

	.type	.L.str.96,@object       # @.str.96
.L.str.96:
	.asciz	"/usr/include/llvm/ADT/ilist_iterator.h"
	.size	.L.str.96, 39

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv
.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv:
	.asciz	"llvm::ilist_iterator::reference llvm::ilist_iterator<llvm::ilist_detail::node_options<llvm::Function, false, false, void>, false, false>::operator*() const [OptionsT = llvm::ilist_detail::node_options<llvm::Function, false, false, void>, IsReverse = false, IsConst = false]"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv, 274

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv
.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv:
	.asciz	"llvm::ilist_iterator::reference llvm::ilist_iterator<llvm::ilist_detail::node_options<llvm::BasicBlock, false, false, void>, false, false>::operator*() const [OptionsT = llvm::ilist_detail::node_options<llvm::BasicBlock, false, false, void>, IsReverse = false, IsConst = false]"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv, 278

	.type	.L.str.97,@object       # @.str.97
.L.str.97:
	.asciz	"pred_iterator out of range!"
	.size	.L.str.97, 28

	.type	.L.str.98,@object       # @.str.98
.L.str.98:
	.asciz	"!It.atEnd() && \"pred_iterator out of range!\""
	.size	.L.str.98, 45

	.type	.L.str.99,@object       # @.str.99
.L.str.99:
	.asciz	"/usr/include/llvm/IR/CFG.h"
	.size	.L.str.99, 27

	.type	.L__PRETTY_FUNCTION__._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv,@object # @__PRETTY_FUNCTION__._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv
.L__PRETTY_FUNCTION__._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv:
	.asciz	"llvm::PredIterator::Self &llvm::PredIterator<llvm::BasicBlock, llvm::Value::user_iterator_impl<llvm::User> >::operator++() [Ptr = llvm::BasicBlock, USE_iterator = llvm::Value::user_iterator_impl<llvm::User>]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv, 208

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv
.L__PRETTY_FUNCTION__._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv:
	.asciz	"llvm::PredIterator::reference llvm::PredIterator<llvm::BasicBlock, llvm::Value::user_iterator_impl<llvm::User> >::operator*() const [Ptr = llvm::BasicBlock, USE_iterator = llvm::Value::user_iterator_impl<llvm::User>]"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv, 217

	.type	.L.str.100,@object      # @.str.100
.L.str.100:
	.asciz	"Iterator index out of bound"
	.size	.L.str.100, 28

	.type	.L.str.101,@object      # @.str.101
.L.str.101:
	.asciz	"index_is_valid(NewIdx) && \"Iterator index out of bound\""
	.size	.L.str.101, 56

	.type	.L__PRETTY_FUNCTION__._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi,@object # @__PRETTY_FUNCTION__._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi
.L__PRETTY_FUNCTION__._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi:
	.asciz	"llvm::SuccIterator::Self &llvm::SuccIterator<llvm::Instruction, llvm::BasicBlock>::operator+=(int) [InstructionT = llvm::Instruction, BlockT = llvm::BasicBlock]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi, 161

	.type	.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv,@object # @__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv
.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv:
	.asciz	"llvm::ilist_iterator::reference llvm::ilist_iterator<llvm::ilist_detail::node_options<llvm::Instruction, false, false, void>, false, false>::operator*() const [OptionsT = llvm::ilist_detail::node_options<llvm::Instruction, false, false, void>, IsReverse = false, IsConst = false]"
	.size	.L__PRETTY_FUNCTION__._ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv, 280

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::StoreInst, const llvm::Instruction *>::doit(const From *) [To = llvm::StoreInst, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_, 151

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::StoreInst, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 99

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::Function, const llvm::Value *>::doit(const From *) [To = llvm::Function, From = const llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_, 137

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::Instruction, const llvm::Value *>::doit(const From *) [To = llvm::Instruction, From = const llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_, 143

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::BranchInst, const llvm::Instruction *>::doit(const From *) [To = llvm::BranchInst, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_, 153

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::BranchInst, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 100

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::SwitchInst, const llvm::Instruction *>::doit(const From *) [To = llvm::SwitchInst, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_, 153

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::SwitchInst, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 100

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::CallInst, const llvm::Instruction *>::doit(const From *) [To = llvm::CallInst, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_, 149

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::CallInst, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 98

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::InvokeInst, const llvm::Instruction *>::doit(const From *) [To = llvm::InvokeInst, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_, 153

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::InvokeInst, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 100

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::UnaryOperator, const llvm::Instruction *>::doit(const From *) [To = llvm::UnaryOperator, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_, 159

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::UnaryOperator, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 103

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::BinaryOperator, const llvm::Instruction *>::doit(const From *) [To = llvm::BinaryOperator, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_, 161

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::BinaryOperator, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 104

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::ConstantInt, const llvm::Value *>::doit(const From *) [To = llvm::ConstantInt, From = const llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_, 143

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::ConstantInt, Y = llvm::Value]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 95

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::AllocaInst, const llvm::Instruction *>::doit(const From *) [To = llvm::AllocaInst, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_, 153

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::Instruction, llvm::Value *>::doit(const From *) [To = llvm::Instruction, From = llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_, 131

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::ConstantInt, llvm::Value *>::doit(const From *) [To = llvm::ConstantInt, From = llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_, 131

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_:
	.asciz	"typename cast_retty<X, Y>::ret_type llvm::cast(Y &) [X = llvm::ConstantInt, Y = llvm::Use]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, 91

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::GlobalVariable, llvm::Value *>::doit(const From *) [To = llvm::GlobalVariable, From = llvm::Value *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_, 137

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_:
	.asciz	"typename cast_retty<X, Y>::ret_type llvm::cast(Y &) [X = llvm::GlobalVariable, Y = llvm::Use]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_, 94

	.type	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_,@object # @__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_
.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_:
	.asciz	"static bool llvm::isa_impl_cl<llvm::GEPOperator, const llvm::Instruction *>::doit(const From *) [To = llvm::GEPOperator, From = const llvm::Instruction *]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_, 155

	.type	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_,@object # @__PRETTY_FUNCTION__._ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_:
	.asciz	"typename cast_retty<X, Y *>::ret_type llvm::cast(Y *) [X = llvm::GEPOperator, Y = llvm::Instruction]"
	.size	.L__PRETTY_FUNCTION__._ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_, 101

	.globl	_ZN17feature_extractor16FeatureExtractorC1ERN4llvm6ModuleE
	.type	_ZN17feature_extractor16FeatureExtractorC1ERN4llvm6ModuleE,@function
.set _ZN17feature_extractor16FeatureExtractorC1ERN4llvm6ModuleE, _ZN17feature_extractor16FeatureExtractorC2ERN4llvm6ModuleE
	.ident	"clang version 10.0.0-4ubuntu1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym _ZN4llvm6Module5beginEv
	.addrsig_sym _ZN4llvm6Module3endEv
	.addrsig_sym _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEES7_
	.addrsig_sym _ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEdeEv
	.addrsig_sym _ZNK4llvm5Value7getNameEv
	.addrsig_sym _ZNK4llvm11GlobalValue13isDeclarationEv
	.addrsig_sym _ZN4llvm8Function5beginEv
	.addrsig_sym __gxx_personality_v0
	.addrsig_sym _ZN4llvm8Function3endEv
	.addrsig_sym _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEES7_
	.addrsig_sym _ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEdeEv
	.addrsig_sym _ZN4llvm10BasicBlock13getTerminatorEv
	.addrsig_sym _ZNK4llvm11Instruction16getNumSuccessorsEv
	.addrsig_sym _ZN4llvm12predecessorsEPNS_10BasicBlockE
	.addrsig_sym _ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE5beginEv
	.addrsig_sym _ZNK4llvm14iterator_rangeINS_12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEEE3endEv
	.addrsig_sym _ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEneERKS6_
	.addrsig_sym _ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEdeEv
	.addrsig_sym _ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEppEv
	.addrsig_sym _ZN4llvm10successorsEPNS_10BasicBlockE
	.addrsig_sym _ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE5beginEv
	.addrsig_sym _ZNK4llvm14iterator_rangeINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEEE3endEv
	.addrsig_sym _ZNK4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EneERKS4_
	.addrsig_sym _ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEdeEv
	.addrsig_sym _ZN4llvm20iterator_facade_baseINS_12SuccIteratorINS_11InstructionENS_10BasicBlockEEESt26random_access_iterator_tagS3_iPS3_S6_EppEv
	.addrsig_sym _ZN4llvm14isCriticalEdgeEPKNS_11InstructionEjb
	.addrsig_sym _ZN4llvm10BasicBlock5beginEv
	.addrsig_sym _ZN4llvm10BasicBlock3endEv
	.addrsig_sym _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEES7_
	.addrsig_sym _ZNK4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEdeEv
	.addrsig_sym _ZNK4llvm4User14getNumOperandsEv
	.addrsig_sym _ZNK4llvm5Value7getTypeEv
	.addrsig_sym _ZN4llvm8dyn_castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZNK4llvm4User10getOperandEj
	.addrsig_sym _ZNK4llvm4Type11isPointerTyEv
	.addrsig_sym _ZN4llvm3isaINS_8FunctionEPNS_5ValueEEEbRKT0_
	.addrsig_sym _ZN4llvm3isaINS_11InstructionEPNS_5ValueEEEbRKT0_
	.addrsig_sym _ZN4llvm8dyn_castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZNK4llvm10BranchInst13isConditionalEv
	.addrsig_sym _ZNK4llvm10BranchInst15isUnconditionalEv
	.addrsig_sym _ZN4llvm8dyn_castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm8dyn_castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZNK4llvm8CallBase17getCalledFunctionEv
	.addrsig_sym _ZNK4llvm4Type11isIntegerTyEv
	.addrsig_sym _ZNK4llvm8CallBase14isIndirectCallEv
	.addrsig_sym _ZNK4llvm8CallBase17getNumArgOperandsEv
	.addrsig_sym _ZNK4llvm8CallBase13getArgOperandEj
	.addrsig_sym _ZN4llvm8dyn_castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm8dyn_castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm8dyn_castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZNK4llvm14BinaryOperator10getOperandEj
	.addrsig_sym _ZNK4llvm4Type17isFloatingPointTyEv
	.addrsig_sym _ZN4llvm3isaINS_11ConstantIntEPNS_5ValueEEEbRKT0_
	.addrsig_sym _ZN4llvm3isaINS_7PHINodeEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZNK4llvm4Type8isVoidTyEv
	.addrsig_sym _ZN4llvm8dyn_castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm3isaINS_10AllocaInstEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4User8operandsEv
	.addrsig_sym _ZNK4llvm14iterator_rangeIPNS_3UseEE5beginEv
	.addrsig_sym _ZNK4llvm14iterator_rangeIPNS_3UseEE3endEv
	.addrsig_sym _ZN4llvm3isaINS_11InstructionENS_3UseEEEbRKT0_
	.addrsig_sym _ZNSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE6insertEOS2_
	.addrsig_sym _ZNK4llvm3UsecvPNS_5ValueEEv
	.addrsig_sym _ZN4llvm8dyn_castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.addrsig_sym _ZNK4llvm11ConstantInt7getTypeEv
	.addrsig_sym _ZNK4llvm4Type11isIntegerTyEj
	.addrsig_sym _ZNK4llvm11ConstantInt12getSExtValueEv
	.addrsig_sym _ZN4llvm8dyn_castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.addrsig_sym _ZNSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE6insertERKS2_
	.addrsig_sym _ZNK4llvm14GlobalVariable14getNumOperandsEv
	.addrsig_sym _ZNK4llvm14GlobalVariable10getOperandEj
	.addrsig_sym _ZN4llvm8dyn_castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm11GEPOperator9idx_beginEv
	.addrsig_sym _ZN4llvm11GEPOperator7idx_endEv
	.addrsig_sym _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb0EEppEv
	.addrsig_sym _ZNK4llvm10BasicBlock4sizeEv
	.addrsig_sym _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEELb0ELb0EEppEv
	.addrsig_sym _ZNKSt3setIPN4llvm5ValueESt4lessIS2_ESaIS2_EE4sizeEv
	.addrsig_sym _ZNKSt3setIPN4llvm14GlobalVariableESt4lessIS2_ESaIS2_EE4sizeEv
	.addrsig_sym _ZN4llvm4errsEv
	.addrsig_sym _ZN4llvm11raw_ostreamlsENS_9StringRefE
	.addrsig_sym _ZN4llvm11raw_ostreamlsEPKc
	.addrsig_sym _ZN4llvm11raw_ostreamlsEj
	.addrsig_sym _ZN4llvm11raw_ostreamlsEd
	.addrsig_sym _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEELb0ELb0EEppEv
	.addrsig_sym _ZN4llvm12simple_ilistINS_8FunctionEJEE5beginEv
	.addrsig_sym _ZN4llvm12simple_ilistINS_8FunctionEJEE3endEv
	.addrsig_sym _ZNSt15_Rb_tree_header8_M_resetEv
	.addrsig_sym __clang_call_terminate
	.addrsig_sym __cxa_begin_catch
	.addrsig_sym _ZSt9terminatev
	.addrsig_sym _ZN4llvm12simple_ilistINS_10BasicBlockEJEE5beginEv
	.addrsig_sym _ZN4llvm12simple_ilistINS_10BasicBlockEJEE3endEv
	.addrsig_sym _ZNK4llvm10BasicBlock13getTerminatorEv
	.addrsig_sym _ZN4llvm10pred_beginEPNS_10BasicBlockE
	.addrsig_sym _ZN4llvm8pred_endEPNS_10BasicBlockE
	.addrsig_sym _ZN4llvm5Value10user_beginEv
	.addrsig_sym _ZN4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEE25advancePastNonTerminatorsEv
	.addrsig_sym _ZNK4llvm5Value26assertModuleIsMaterializedEv
	.addrsig_sym _ZN4llvm5Value23materialized_user_beginEv
	.addrsig_sym _ZNK4llvm5Value30assertModuleIsMaterializedImplEv
	.addrsig_sym _ZNK4llvm5Value18user_iterator_implINS_4UserEE5atEndEv
	.addrsig_sym _ZN4llvm8dyn_castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZNK4llvm5Value18user_iterator_implINS_4UserEEdeEv
	.addrsig_sym _ZNK4llvm11Instruction12isTerminatorEv
	.addrsig_sym _ZN4llvm5Value18user_iterator_implINS_4UserEEppEv
	.addrsig_sym _ZNK4llvm5Value18user_iterator_implINS_4UserEEeqERKS3_
	.addrsig_sym _ZNK4llvm5Value17use_iterator_implINS_3UseEEeqERKS3_
	.addrsig_sym _ZN4llvm3isaINS_11InstructionEPNS_4UserEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_11InstructionENS_4UserEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_4UserEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_4UserES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm13simplify_typeIKPNS_4UserEE18getSimplifiedValueERS3_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11InstructionEPKNS_4UserEE4doitES4_
	.addrsig_sym __assert_fail
	.addrsig_sym _ZN4llvm8isa_implINS_11InstructionENS_4UserEvE4doitERKS2_
	.addrsig_sym _ZN4llvm11Instruction7classofEPKNS_5ValueE
	.addrsig_sym _ZNK4llvm5Value10getValueIDEv
	.addrsig_sym _ZN4llvm13simplify_typeIPNS_4UserEE18getSimplifiedValueERS2_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_11InstructionEPNS_4UserES3_E4doitERKS3_
	.addrsig_sym _ZNK4llvm5Value17use_iterator_implINS_3UseEEptEv
	.addrsig_sym _ZNK4llvm3Use7getUserEv
	.addrsig_sym _ZNK4llvm5Value17use_iterator_implINS_3UseEEdeEv
	.addrsig_sym _ZN4llvm11Instruction12isTerminatorEj
	.addrsig_sym _ZNK4llvm11Instruction9getOpcodeEv
	.addrsig_sym _ZN4llvm5Value17use_iterator_implINS_3UseEEppEv
	.addrsig_sym _ZNK4llvm3Use7getNextEv
	.addrsig_sym _ZN4llvm5Value8user_endEv
	.addrsig_sym _ZSt4moveIRN4llvm12PredIteratorINS0_10BasicBlockENS0_5Value18user_iterator_implINS0_4UserEEEEEEONSt16remove_referenceIT_E4typeEOSA_
	.addrsig_sym _ZN4llvm10succ_beginEPNS_10BasicBlockE
	.addrsig_sym _ZN4llvm8succ_endEPNS_10BasicBlockE
	.addrsig_sym _ZSt4moveIRN4llvm12SuccIteratorINS0_11InstructionENS0_10BasicBlockEEEEONSt16remove_referenceIT_E4typeEOS7_
	.addrsig_sym _ZN4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.addrsig_sym _ZN4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.addrsig_sym _ZNK4llvm4User14getOperandListEv
	.addrsig_sym _ZNK4llvm4User18getHungOffOperandsEv
	.addrsig_sym _ZNK4llvm4User20getIntrusiveOperandsEv
	.addrsig_sym _ZNK4llvm4Type9getTypeIDEv
	.addrsig_sym _ZNK4llvm10BranchInst14getNumOperandsEv
	.addrsig_sym _ZN4llvm21VariadicOperandTraitsINS_10BranchInstELj1EE8operandsEPKNS_4UserE
	.addrsig_sym _ZN4llvm16dyn_cast_or_nullINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZNK4llvm8CallBase16getCalledOperandEv
	.addrsig_sym _ZN4llvm4castINS_8FunctionENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_8FunctionEPNS_5ValueES3_E4doitERKS3_
	.addrsig_sym _ZNK4llvm8CallBase2OpILin1EEERKNS_3UseEv
	.addrsig_sym _ZN4llvm4User6OpFromILin1ENS_8CallBaseEEERNS_3UseEPKT0_
	.addrsig_sym _ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE6op_endEPS1_
	.addrsig_sym _ZNK4llvm8CallBase8arg_sizeEv
	.addrsig_sym _ZNK4llvm8CallBase7arg_endEv
	.addrsig_sym _ZNK4llvm8CallBase9arg_beginEv
	.addrsig_sym _ZN4llvm8CallBase7arg_endEv
	.addrsig_sym _ZN4llvm8CallBase17data_operands_endEv
	.addrsig_sym _ZNK4llvm8CallBase25getNumTotalBundleOperandsEv
	.addrsig_sym _ZN4llvm8CallBase6op_endEv
	.addrsig_sym _ZNK4llvm8CallBase27getNumSubclassExtraOperandsEv
	.addrsig_sym _ZNK4llvm8CallBase34getNumSubclassExtraOperandsDynamicEv
	.addrsig_sym _ZN4llvm25llvm_unreachable_internalEPKcS1_j
	.addrsig_sym _ZNK4llvm8CallBase17hasOperandBundlesEv
	.addrsig_sym _ZNK4llvm8CallBase27getBundleOperandsStartIndexEv
	.addrsig_sym _ZNK4llvm8CallBase25getBundleOperandsEndIndexEv
	.addrsig_sym _ZNK4llvm8CallBase20getNumOperandBundlesEv
	.addrsig_sym _ZSt8distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_
	.addrsig_sym _ZNK4llvm8CallBase20bundle_op_info_beginEv
	.addrsig_sym _ZNK4llvm8CallBase18bundle_op_info_endEv
	.addrsig_sym _ZSt10__distanceIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E15difference_typeES6_S6_St26random_access_iterator_tag
	.addrsig_sym _ZSt19__iterator_categoryIPKN4llvm8CallBase12BundleOpInfoEENSt15iterator_traitsIT_E17iterator_categoryERKS6_
	.addrsig_sym _ZN4llvm8CallBase20bundle_op_info_beginEv
	.addrsig_sym _ZNK4llvm8CallBase13hasDescriptorEv
	.addrsig_sym _ZN4llvm4User13getDescriptorEv
	.addrsig_sym _ZNK4llvm15MutableArrayRefIhE5beginEv
	.addrsig_sym _ZNK4llvm15MutableArrayRefIhE4dataEv
	.addrsig_sym _ZNK4llvm8ArrayRefIhE4dataEv
	.addrsig_sym _ZN4llvm8CallBase18bundle_op_info_endEv
	.addrsig_sym _ZNK4llvm15MutableArrayRefIhE3endEv
	.addrsig_sym _ZNK4llvm8ArrayRefIhE4sizeEv
	.addrsig_sym _ZN4llvm8CallBase9arg_beginEv
	.addrsig_sym _ZN4llvm8CallBase8op_beginEv
	.addrsig_sym _ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8op_beginEPS1_
	.addrsig_sym _ZNK4llvm8CallBase10getOperandEj
	.addrsig_sym _ZN4llvm21VariadicOperandTraitsINS_8CallBaseELj1EE8operandsEPKNS_4UserE
	.addrsig_sym _ZN4llvm12cast_or_nullINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.addrsig_sym _ZNK4llvm3Use3getEv
	.addrsig_sym _ZN4llvm3isaINS_5ValueEPS1_EEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_5ValueES1_EENS_10cast_rettyIT_PT0_E8ret_typeES5_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_5ValueEKPS1_PKS1_E4doitERS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_5ValueEPKS1_S3_E4doitERKS3_
	.addrsig_sym _ZN4llvm13simplify_typeIKPNS_5ValueEE18getSimplifiedValueERS3_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_5ValueEPKS1_E4doitES3_
	.addrsig_sym _ZN4llvm8isa_implINS_5ValueES1_vE4doitERKS1_
	.addrsig_sym _ZN4llvm13simplify_typeIPNS_5ValueEE18getSimplifiedValueERS2_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_5ValueEPS1_S2_E4doitERKS2_
	.addrsig_sym _ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8operandsEPKNS_4UserE
	.addrsig_sym _ZN4llvm21FixedNumOperandTraitsINS_14BinaryOperatorELj2EE8op_beginEPS1_
	.addrsig_sym _ZN4llvm4User8op_beginEv
	.addrsig_sym _ZN4llvm4User6op_endEv
	.addrsig_sym _ZN4llvm4User14getOperandListEv
	.addrsig_sym _ZSt4moveIRPN4llvm3UseEEONSt16remove_referenceIT_E4typeEOS5_
	.addrsig_sym _ZN4llvm4castINS_11IntegerTypeENS_4TypeEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm3isaINS_11IntegerTypeEPNS_4TypeEEEbRKT0_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_11IntegerTypeEPNS_4TypeES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11IntegerTypeEKPNS_4TypeEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11IntegerTypeEPKNS_4TypeES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm13simplify_typeIKPNS_4TypeEE18getSimplifiedValueERS3_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11IntegerTypeEPKNS_4TypeEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_11IntegerTypeENS_4TypeEvE4doitERKS2_
	.addrsig_sym _ZN4llvm11IntegerType7classofEPKNS_4TypeE
	.addrsig_sym _ZN4llvm13simplify_typeIPNS_4TypeEE18getSimplifiedValueERS2_
	.addrsig_sym _ZNK4llvm5APInt12getSExtValueEv
	.addrsig_sym _ZNK4llvm5APInt12isSingleWordEv
	.addrsig_sym _ZN4llvm12SignExtend64Emj
	.addrsig_sym _ZNK4llvm5APInt16getMinSignedBitsEv
	.addrsig_sym _ZNK4llvm5APInt10isNegativeEv
	.addrsig_sym _ZNK4llvm5APInt16countLeadingOnesEv
	.addrsig_sym _ZNK4llvm5APInt13getActiveBitsEv
	.addrsig_sym _ZNK4llvm5APIntixEj
	.addrsig_sym _ZNK4llvm5APInt11getBitWidthEv
	.addrsig_sym _ZN4llvm5APInt7maskBitEj
	.addrsig_sym _ZNK4llvm5APInt7getWordEj
	.addrsig_sym _ZN4llvm5APInt8whichBitEj
	.addrsig_sym _ZN4llvm5APInt9whichWordEj
	.addrsig_sym _ZN4llvm16countLeadingOnesImEEjT_NS_12ZeroBehaviorE
	.addrsig_sym _ZNK4llvm5APInt24countLeadingOnesSlowCaseEv
	.addrsig_sym _ZN4llvm17countLeadingZerosImEEjT_NS_12ZeroBehaviorE
	.addrsig_sym _ZN4llvm6detail19LeadingZerosCounterImLm8EE5countEmNS_12ZeroBehaviorE
	.addrsig_sym _ZNK4llvm5APInt17countLeadingZerosEv
	.addrsig_sym _ZNK4llvm5APInt25countLeadingZerosSlowCaseEv
	.addrsig_sym _ZN4llvm21OptionalOperandTraitsINS_14GlobalVariableELj1EE8operandsEPKNS_4UserE
	.addrsig_sym _ZN4llvm21FixedNumOperandTraitsINS_14GlobalVariableELj1EE8op_beginEPS1_
	.addrsig_sym _ZNK4llvm12simple_ilistINS_11InstructionEJEE4sizeEv
	.addrsig_sym _ZSt8distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
	.addrsig_sym _ZNK4llvm12simple_ilistINS_11InstructionEJEE5beginEv
	.addrsig_sym _ZNK4llvm12simple_ilistINS_11InstructionEJEE3endEv
	.addrsig_sym _ZSt10__distanceIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St18input_iterator_tag
	.addrsig_sym _ZSt19__iterator_categoryIN4llvm14ilist_iteratorINS0_12ilist_detail12node_optionsINS0_11InstructionELb0ELb0EvEELb0ELb1EEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
	.addrsig_sym _ZN4llvmneERKNS_14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEES7_
	.addrsig_sym _ZN4llvm14ilist_iteratorINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEELb0ELb1EEppEv
	.addrsig_sym _ZNK4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.addrsig_sym _ZNK4llvm15ilist_node_baseILb0EE7getNextEv
	.addrsig_sym _ZNK4llvm9StringRef4sizeEv
	.addrsig_sym _ZN4llvm11raw_ostream5writeEPKcm
	.addrsig_sym _ZNK4llvm9StringRef4dataEv
	.addrsig_sym _ZN4llvm9StringRef6strLenEPKc
	.addrsig_sym strlen
	.addrsig_sym _ZN4llvm11raw_ostreamlsEm
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE7destroyIS3_EEvRS5_PT_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.addrsig_sym _ZNSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE7destroyIS4_EEvPT_
	.addrsig_sym _ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.addrsig_sym _ZN9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE10deallocateERS5_PS4_m
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE10deallocateEPS5_m
	.addrsig_sym _ZdlPv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_beginEv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_S_rightEPSt18_Rb_tree_node_base
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_S_leftEPSt18_Rb_tree_node_base
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE7destroyIS3_EEvRS5_PT_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE21_M_get_Node_allocatorEv
	.addrsig_sym _ZNSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE7destroyIS4_EEvPT_
	.addrsig_sym _ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.addrsig_sym _ZN9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE10deallocateERS5_PS4_m
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE10deallocateEPS5_m
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_7PHINodeEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_7PHINodeEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm13simplify_typeIKPNS_11InstructionEE18getSimplifiedValueERS3_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_7PHINodeEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_7PHINodeENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm7PHINode7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm13simplify_typeIPNS_11InstructionEE18getSimplifiedValueERS2_
	.addrsig_sym _ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_8FunctionELb0ELb0EvEEE7getNextEv
	.addrsig_sym _ZNK4llvm15ilist_node_baseILb0EE15isKnownSentinelEv
	.addrsig_sym _ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_8FunctionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.addrsig_sym _ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_8FunctionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.addrsig_sym _ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_10BasicBlockELb0ELb0EvEEE7getNextEv
	.addrsig_sym _ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.addrsig_sym _ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_10BasicBlockELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.addrsig_sym _ZNK4llvm12PredIteratorINS_10BasicBlockENS_5Value18user_iterator_implINS_4UserEEEEeqERKS6_
	.addrsig_sym _ZN4llvm11Instruction9getParentEv
	.addrsig_sym _ZNK4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEeqERKS3_
	.addrsig_sym _ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEEpLEi
	.addrsig_sym _ZN4llvm12SuccIteratorINS_11InstructionENS_10BasicBlockEE14index_is_validEi
	.addrsig_sym _ZNK4llvm11Instruction12getSuccessorEj
	.addrsig_sym _ZN4llvm15ilist_node_implINS_12ilist_detail12node_optionsINS_11InstructionELb0ELb0EvEEE7getNextEv
	.addrsig_sym _ZN4llvm12ilist_detail18SpecificNodeAccessINS0_12node_optionsINS_11InstructionELb0ELb0EvEEE11getValuePtrEPNS_15ilist_node_implIS4_EE
	.addrsig_sym _ZN4llvm12ilist_detail10NodeAccess11getValuePtrINS0_12node_optionsINS_11InstructionELb0ELb0EvEEEENT_7pointerEPNS_15ilist_node_implIS6_EE
	.addrsig_sym _ZN4llvm3isaINS_9StoreInstEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_9StoreInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_9StoreInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_9StoreInstEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_9StoreInstEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_9StoreInstENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm9StoreInst7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm16cast_convert_valINS_9StoreInstEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_8FunctionEKPNS_5ValueEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_8FunctionEPKNS_5ValueES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_8FunctionEPKNS_5ValueEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_8FunctionENS_5ValueEvE4doitERKS2_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11InstructionEKPNS_5ValueEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11InstructionEPKNS_5ValueES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11InstructionEPKNS_5ValueEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_11InstructionENS_5ValueEvE4doitERKS2_
	.addrsig_sym _ZN4llvm3isaINS_10BranchInstEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_10BranchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10BranchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10BranchInstEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_10BranchInstEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_10BranchInstENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm10BranchInst7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm16cast_convert_valINS_10BranchInstEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm3isaINS_10SwitchInstEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_10SwitchInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10SwitchInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10SwitchInstEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_10SwitchInstEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_10SwitchInstENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm10SwitchInst7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm16cast_convert_valINS_10SwitchInstEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm3isaINS_8CallInstEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_8CallInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_8CallInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_8CallInstEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_8CallInstEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_8CallInstENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm8CallInst7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm16cast_convert_valINS_8CallInstEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm3isaINS_10InvokeInstEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_10InvokeInstENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10InvokeInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10InvokeInstEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_10InvokeInstEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_10InvokeInstENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm10InvokeInst7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm16cast_convert_valINS_10InvokeInstEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm3isaINS_13UnaryOperatorEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_13UnaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_13UnaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_13UnaryOperatorEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_13UnaryOperatorENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm13UnaryOperator7classofEPKNS_11InstructionE
	.addrsig_sym _ZNK4llvm11Instruction9isUnaryOpEv
	.addrsig_sym _ZN4llvm11Instruction9isUnaryOpEj
	.addrsig_sym _ZN4llvm16cast_convert_valINS_13UnaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm3isaINS_14BinaryOperatorEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_14BinaryOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_14BinaryOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_14BinaryOperatorEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_14BinaryOperatorENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm14BinaryOperator7classofEPKNS_11InstructionE
	.addrsig_sym _ZNK4llvm11Instruction10isBinaryOpEv
	.addrsig_sym _ZN4llvm11Instruction10isBinaryOpEj
	.addrsig_sym _ZN4llvm16cast_convert_valINS_14BinaryOperatorEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11ConstantIntEKPNS_5ValueEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11ConstantIntEPKNS_5ValueES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11ConstantIntEPKNS_5ValueEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_11ConstantIntENS_5ValueEvE4doitERKS2_
	.addrsig_sym _ZN4llvm11ConstantInt7classofEPKNS_5ValueE
	.addrsig_sym _ZN4llvm4castINS_11ConstantIntENS_5ValueEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10AllocaInstEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_10AllocaInstEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_10AllocaInstEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_10AllocaInstENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm10AllocaInst7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11InstructionEKNS_3UseEPNS_5ValueEE4doitERS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11InstructionEPNS_5ValueES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm13simplify_typeIKNS_3UseEE18getSimplifiedValueERS2_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11InstructionEPNS_5ValueEE4doitEPKS2_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.addrsig_sym _ZSt4moveIRPN4llvm5ValueEEONSt16remove_referenceIT_E4typeEOS5_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.addrsig_sym _ZNKSt9_IdentityIPN4llvm5ValueEEclERS2_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSE_OT_RT0_
	.addrsig_sym _ZSt7forwardIPN4llvm5ValueEEOT_RNSt16remove_referenceIS3_E4typeE
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.addrsig_sym _ZNKSt4lessIPN4llvm5ValueEEclES2_S2_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZSteqRKSt17_Rb_tree_iteratorIPN4llvm5ValueEES5_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.addrsig_sym _ZNSt17_Rb_tree_iteratorIPN4llvm5ValueEEmmEv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.addrsig_sym _ZNKSt9_IdentityIPN4llvm5ValueEEclERKS2_
	.addrsig_sym _ZNKSt13_Rb_tree_nodeIPN4llvm5ValueEE9_M_valptrEv
	.addrsig_sym _ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE6_M_ptrEv
	.addrsig_sym _ZNK9__gnu_cxx16__aligned_membufIPN4llvm5ValueEE7_M_addrEv
	.addrsig_sym _ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS7_E4typeE
	.addrsig_sym _ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE
	.addrsig_sym _ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base
	.addrsig_sym _ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.addrsig_sym _ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE8allocateERS5_m
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8allocateEmPKv
	.addrsig_sym _ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE8max_sizeEv
	.addrsig_sym _ZSt17__throw_bad_allocv
	.addrsig_sym _Znwm
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm5ValueEEEE9constructIS3_JS3_EEEvRS5_PT_DpOT0_
	.addrsig_sym __cxa_rethrow
	.addrsig_sym __cxa_end_catch
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm5ValueEEE9constructIS4_JS4_EEEvPT_DpOT0_
	.addrsig_sym _ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS5_E4typeE
	.addrsig_sym _ZSt7forwardIbEOT_RNSt16remove_referenceIS0_E4typeE
	.addrsig_sym _ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm5ValueEEEOT_RNSt16remove_referenceIS6_E4typeE
	.addrsig_sym _ZSt7forwardIRbEOT_RNSt16remove_referenceIS1_E4typeE
	.addrsig_sym _ZN4llvm3isaINS_11ConstantIntENS_3UseEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_11ConstantIntENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11ConstantIntEKNS_3UseEPNS_5ValueEE4doitERS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11ConstantIntEPNS_5ValueES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11ConstantIntEPNS_5ValueEE4doitEPKS2_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_11ConstantIntENS_3UseEPNS_5ValueEE4doitERS2_
	.addrsig_sym _ZN4llvm13simplify_typeINS_3UseEE18getSimplifiedValueERS1_
	.addrsig_sym _ZN4llvm3isaINS_14GlobalVariableENS_3UseEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_14GlobalVariableENS_3UseEEENS_10cast_rettyIT_T0_E8ret_typeERS5_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_14GlobalVariableEKNS_3UseEPNS_5ValueEE4doitERS3_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_14GlobalVariableEPNS_5ValueEE4doitEPKS2_
	.addrsig_sym _ZN4llvm8isa_implINS_14GlobalVariableENS_5ValueEvE4doitERKS2_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_14GlobalVariableENS_3UseEPNS_5ValueEE4doitERS2_
	.addrsig_sym _ZN4llvm16cast_convert_valINS_14GlobalVariableEPNS_5ValueES3_E4doitERKS3_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE16_M_insert_uniqueIRKS2_EESt4pairISt17_Rb_tree_iteratorIS2_EbEOT_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE24_M_get_insert_unique_posERKS2_
	.addrsig_sym _ZNKSt9_IdentityIPN4llvm14GlobalVariableEEclERKS2_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE10_M_insert_IRKS2_NS8_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS2_EPSt18_Rb_tree_node_baseSG_OT_RT0_
	.addrsig_sym _ZSt7forwardIRKPN4llvm14GlobalVariableEEOT_RNSt16remove_referenceIS5_E4typeE
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_M_endEv
	.addrsig_sym _ZNKSt4lessIPN4llvm14GlobalVariableEEclES2_S2_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt13_Rb_tree_nodeIS2_E
	.addrsig_sym _ZSteqRKSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEES5_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5beginEv
	.addrsig_sym _ZNSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEmmEv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE6_S_keyEPKSt18_Rb_tree_node_base
	.addrsig_sym _ZNKSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEE9_M_valptrEv
	.addrsig_sym _ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE6_M_ptrEv
	.addrsig_sym _ZNK9__gnu_cxx16__aligned_membufIPN4llvm14GlobalVariableEE7_M_addrEv
	.addrsig_sym _ZSt7forwardIRPSt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS7_E4typeE
	.addrsig_sym _ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_Alloc_nodeclIRKS2_EEPSt13_Rb_tree_nodeIS2_EOT_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE11_M_get_nodeEv
	.addrsig_sym _ZNSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE17_M_construct_nodeIJRKS2_EEEvPSt13_Rb_tree_nodeIS2_EDpOT_
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE8allocateERS5_m
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8allocateEmPKv
	.addrsig_sym _ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE8max_sizeEv
	.addrsig_sym _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEEE9constructIS3_JRKS3_EEEvRS5_PT_DpOT0_
	.addrsig_sym _ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeIPN4llvm14GlobalVariableEEE9constructIS4_JRKS4_EEEvPT_DpOT0_
	.addrsig_sym _ZSt7forwardISt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS5_E4typeE
	.addrsig_sym _ZSt7forwardIRSt17_Rb_tree_iteratorIPN4llvm14GlobalVariableEEEOT_RNSt16remove_referenceIS6_E4typeE
	.addrsig_sym _ZN4llvm3isaINS_11GEPOperatorEPNS_11InstructionEEEbRKT0_
	.addrsig_sym _ZN4llvm4castINS_11GEPOperatorENS_11InstructionEEENS_10cast_rettyIT_PT0_E8ret_typeES6_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11GEPOperatorEKPNS_11InstructionEPKS2_E4doitERS4_
	.addrsig_sym _ZN4llvm13isa_impl_wrapINS_11GEPOperatorEPKNS_11InstructionES4_E4doitERKS4_
	.addrsig_sym _ZN4llvm11isa_impl_clINS_11GEPOperatorEPKNS_11InstructionEE4doitES4_
	.addrsig_sym _ZN4llvm8isa_implINS_11GEPOperatorENS_11InstructionEvE4doitERKS2_
	.addrsig_sym _ZN4llvm16ConcreteOperatorINS_8OperatorELj34EE7classofEPKNS_11InstructionE
	.addrsig_sym _ZN4llvm16cast_convert_valINS_11GEPOperatorEPNS_11InstructionES3_E4doitERKS3_
	.addrsig_sym _ZNKSt8_Rb_treeIPN4llvm5ValueES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.addrsig_sym _ZNKSt8_Rb_treeIPN4llvm14GlobalVariableES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE4sizeEv
	.addrsig_sym _Unwind_Resume
	.addrsig_sym _ZN4llvm24DisableABIBreakingChecksE
