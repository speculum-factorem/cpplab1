buildTask1: task1.cpp
	g++ task1.cpp -o task1

runTask1: task1
	./task1

buildTask2: task2.cpp
	g++ task2.cpp -o task2

runTask2: task2
	./task2