all:
	gcc -mindirect-branch=thunk -mfunction-return=thunk indirect.c -g -o indirect
	objdump  -S -d -M intel --disassembler-options=intel,retpoline,no-show-raw-insn --line-numbers indirect > indirect.S

clean:
	rm -f indirect.S indirect
	rm -f perf.data perf.data.old

