# STOR-601-c-Coursework

#### TASK 1 FILES

IS_STABLE.h is the header file for the IS_STABLE algorithm, and IS_STABLE.cpp is the source code file for the algorithm. These can be compiled in Unix to give the object file, called IS_STABLE.o .
This is done by using the following code:

g++ --version
g++ --std=c++17 -c IS_STABLE.cpp           // This compiles the object file
ls *.o                                     // This shows that the file IS_STABLE.o has been produced

The file main-IS_STABLE.cpp is a file that contains an example of how IS_STABLE can be used, and the file main-IS_STABLE.out is produced to output the result. The example uses 2 preference tables and a matching to reveal whether the matchings is stable or not. By using the following Unix code, the stability of a matching is given:

g++ --std=c++17 main-IS_STABLE.cpp IS_STABLE.o -o main-IS_STABLE.out
./main-IS_STABLE.out


Fundamental.h is the header file for the Fundamental Algorithm, and Fundamental.cpp is the source code file for the algorithm. These can be compiled in Unix to give the object file, called Fundamental.o .This is done by using the following code:

g++ --version
g++ --std=c++17 -c Fundamental.cpp           // This compiles the object file
ls *.o                                     // This shows that the file Fundamental.o has been produced

The file main-Fundamental.cpp is a file that contains an example of how the Fundamental Algorithm can be used, and the file main-Fundamental.out is produced to output the result. The example uses 2 preference tables to produce a stable matching. By using the following Unix code, a stable matching from the example is produced:

g++ --std=c++17 main-Fundamental.cpp Fundamental.o -o main-Fundamental.out
./main-Fundamental.out


#### TASK 2 FILES

csvtable.h is the header file for the algorithm that takes a .csv file and understands it as a preference table to be used in the IS_STABLE or Fundamental Algorithm. csvtable.cpp is the source code file for the algorithm. These can be compiled in Unix to give the object file, called csvtable.o .This is done by using the following code:

g++ --version
g++ --std=c++17 -c csvtable.cpp           // This compiles the object file
ls *.o                                     // This shows that the file csvtable.o has been produced

The file main-csvtable.cpp is created as an executable program where you can have two files called "men-preferences.csv" and "women-preferences.csv" as inputs. The program creates the two preference tables, and then implements them into the Fundamental Algorithm, and the matching is outputted. The matching is then used along with the tables to see if the matching is stable. The Fundamental Algorithm should always produce a stable matching, which should be confirmed from the use of IS_STABLE. The following code is used which produces main-csvtable.out which outpus the results:

g++ --version
g++ --std=c++17 main-csvtable.cpp csvtable.o Fundamental.o IS_STABLE.o -o main-csvtable.out
./main-csvtable.out "men-preferences.csv" "women-preferences.csv"

An example of the layout of the .csv files are supplied by the "men-preferences.csv" and "women-preferences.csv" files.


#### TASK 3 FILES

read_more.h is the header file for the algorithm that takes a .csv file and understands it as a preference table to be used in the IS_STABLE or Fundamental Algorithm. read_more.cpp is the source code file for the algorithm. These can be compiled in Unix to give the object file, called read_more.o .This is done by using the following code:

g++ --version
g++ --std=c++17 -c read_more.cpp           // This compiles the object file
ls *.o                                     // This shows that the file read_more.o has been produced

The file main-read_more.cpp is created as an executable program where you can have two files called "men-preferences.csv" and "women-preferences.csv" as inputs. The program creates the two preference tables, and then implements them into the Fundamental Algorithm n times, where the value of n can be altered to the person's wish in the file (the example in the main-read_more.cpp file sets n=1000000). The following code is used which produces main-read_more.out which outpus the results of the Fundamental Algorithm, and the time function can be used in Unix:

g++ -- version
g++ --std=c++17 main-read_more.cpp read_more.o Fundamental.o -o main-read_more.out
time ./main-read_more.out

The argument -03 can be used to change the amount of time it takes to run, which is used in the following way:

g++ -- version
g++  -03 --std=c++17 main-read_more.cpp read_more.o Fundamental.o -o main-read_more.out
time ./main-read_more.out

The file c++ task 3 graph.ipynb is used to compare the amount of time it takes, on average, for the Fundamental Algorithm to work with the python algorithm,the c++ algorithm, and he c++ algorithm when using the -03 argument. The graph at the bottom of the file shows how the time changes while the number of men and women in each set change from 2-10.


