# Section 5 - File Organization (C++ File Handling)

| File | Topic |
|---|---|
| 00_create_sample_files.cpp | Creates file.txt, f1.txt, f2.txt, f3.txt (run first) |
| 01_open_mode_out.cpp | Open file with ios::out |
| 02_read_write_same_file.cpp | ios::in / ios::out, tellg, seekg |
| 03_app_vs_ate.cpp | Difference between ios::app and ios::ate (slide example) |
| 04_ate_keep_old_data.cpp | ios::ate that keeps old data |
| 05_task5_students_records.cpp | Task 5: student records with '$' delimiter |
| 06_read_students_records.cpp | Bonus: read records back |

## Compile and run
    g++ 00_create_sample_files.cpp -o create_samples && ./create_samples
    g++ 02_read_write_same_file.cpp -o rw && ./rw
    g++ 03_app_vs_ate.cpp -o app_ate && ./app_ate
    g++ 04_ate_keep_old_data.cpp -o ate_keep && ./ate_keep
    g++ 05_task5_students_records.cpp -o task5 && ./task5
    g++ 06_read_students_records.cpp -o read_students && ./read_students
