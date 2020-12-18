a.out:main.o experiment.o generator.o num_threads.o
	g++-10 -fopenmp main.o experiment.o generator.o num_threads.o

main.o:main.cpp
	g++-10 -c main.cpp

experiment.o:experiment.cpp
	g++-10 --std=c++17 -fopenmp -c experiment.cpp

generator.o:generator.cpp
	g++-10 --std=c++17 -fopenmp -c generator.cpp

num_threads.o:num_threads.cpp
	g++-10 -fopenmp -c num_threads.cpp