hello.txt:
	echo Hello World > hello.txt
	echo Hello >> hello.txt
	echo World >> hello.txt
# ファイルターゲット

goodbye:
	touch goodbye.txt
	echo See you! > goodbye.txt
# タスクターゲット

.PHONY: clean
clean:
	rm -f *.txt
# タスクターゲット .PHONY ver.

.PHONY: targetA
targetA:
	echo run targetA

targetB:
	echo run targetB
