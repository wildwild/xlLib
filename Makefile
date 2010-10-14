CC = cl
CFLAGS = /Ox /MT /ISourceCode
DIR = UnitTest
DEL_FILE = del /F /Q

all: Main xlArray xlList xlSet xlPair xlMap xlString xlQIPtr xlBigInt xlRegExp

Main:
	$(CC) $(CFLAGS) $(DIR)\Main\Main.cpp -FeMain.exe

xlArray:
	$(CC) $(CFLAGS) $(DIR)\xlArrayTest\Main.cpp -FexlArrayTest.exe

xlList:
	$(CC) $(CFLAGS) $(DIR)\xlListTest\Main.cpp -FexlListTest.exe

xlRBTree:
	$(CC) $(CFLAGS) $(DIR)\xlRBTreeTest\Main.cpp -FexlRBTreeTest.exe

xlSet:
	$(CC) $(CFLAGS) $(DIR)\xlSetTest\Main.cpp -FexlSetTest.exe

xlPair:
	$(CC) $(CFLAGS) $(DIR)\xlPairTest\Main.cpp -FexlPairTest.exe

xlMap:
	$(CC) $(CFLAGS) $(DIR)\xlMapTest\Main.cpp -FexlMapTest.exe

xlString:
	$(CC) $(CFLAGS) $(DIR)\xlStringTest\Main.cpp -FexlStringTest.exe

xlQIPtr:
	$(CC) $(CFLAGS) $(DIR)\xlQIPtrTest\Main.cpp -FexlQIPtrTest.exe

xlBigInt:
	$(CC) $(CFLAGS) $(DIR)\xlBigIntTest\Main.cpp -FexlBigIntTest.exe

xlRegExp:
	$(CC) $(CFLAGS) $(DIR)\xlRegExpTest\Main.cpp -FexlRegExp.exe


clean:
	$(DEL_FILE) *.obj
	$(DEL_FILE) *.exe