Section 6 - File Organization in C++

Programs
  01_check_open_fail.cpp   open check with fail()      (needs out.txt)
  02_check_open_good.cpp   open check with good()      (needs out.txt)
  03_check_eof.cpp         end-of-file check with eof() (needs f.txt)
  04_delete_value.cpp      delete a value from a file   (needs original.txt)
  05_delete_line.cpp       delete a line by number      (needs file.txt)

Sample input files are in data/. Copy them next to the compiled program
(the programs read files from the current working directory).
Programs 04 and 05 MODIFY their data files, so re-copy them to run again.

Compile:  g++ -std=c++11 05_delete_line.cpp -o delete_line
