# File Organization - Section 3 (C++)

مشروع تدريبي جاهز للعمل على **VS Code** لتطبيق موضوعات:

- `tellg()`
- `seekg()`
- `tellp()`
- `seekp()`
- `ios::beg`
- `ios::cur`
- `ios::end`
- الوصول المباشر إلى موقع داخل الملف
- Task 3: تحويل `Hello Everybody` إلى `Hello Everyone`

## الفكرة الأساسية

- `g` = Get Pointer = القراءة
- `p` = Put Pointer = الكتابة
- `tell` = يخبرني بالمكان الحالي للمؤشر
- `seek` = ينقل المؤشر إلى مكان آخر

## ملفات المشروع

### 01_tellg_basic.cpp
يعرض مكان مؤشر القراءة عند فتح الملف.

### 02_tellg_after_read.cpp
يوضح كيف يتحرك مؤشر القراءة بعد قراءة حرف.

### 03_seekg_basic.cpp
ينقل مؤشر القراءة إلى Position 2 ثم يقرأ بقية السطر.

### 04_seekg_beg.cpp
مثال على:
```cpp
file.seekg(offset, ios::beg);
```

### 05_seekg_cur.cpp
مثال على:
```cpp
file.seekg(offset, ios::cur);
```

### 06_seekg_end_filesize.cpp
يستخدم:
```cpp
file.seekg(0, ios::end);
file.tellg();
```
لحساب حجم الملف بالبايت.

### 07_tellp_basic.cpp
يكتب `Welcome everyone` ثم يعرض مكان Put Pointer.

### 08_seekp_overwrite.cpp
يوضح أن `seekp()` يعمل Overwrite وليس Insert.

### 09_seekp_sample.cpp
مثال:
```text
This is an apple
```
ثم استخدام `seekp(9)` والكتابة لتصبح:
```text
This is a sample
```

### 10_combined_fstream.cpp
يجمع القراءة والكتابة باستخدام `fstream`.

### 11_task3_solution.cpp
حل Task 3:
```text
Hello Everybody
```
إلى:
```text
Hello Everyone
```

> هذا المثال يستخدم `<filesystem>` ولذلك يجب تشغيله باستخدام C++17 أو أحدث.

### 12_direct_access_record_demo.cpp
مثال تعليمي على حساب مكان Record ثابت الحجم:
```cpp
(recordNumber - 1) * recordSize
```

---

# التشغيل على VS Code

## 1. افتح مجلد المشروع
من VS Code:

```text
File > Open Folder
```

ثم اختر:

```text
File_Organization_Section_3_VSCode
```

## 2. تأكد من وجود g++

في Terminal:

```bash
g++ --version
```

## 3. تشغيل أي ملف

افتح ملف C++ المطلوب من مجلد `src`.

ثم استخدم:

```text
Terminal > Run Build Task
```

أو الاختصار:

```text
Ctrl + Shift + B
```

الـ task المرفق يقوم بترجمة الملف المفتوح باستخدام C++17.

بعدها شغّل الملف التنفيذي من Terminal.

مثال Windows:

```powershell
.\build\03_seekg_basic.exe
```

## ملاحظة مهمة

شغّل البرامج وأنت داخل المجلد الرئيسي للمشروع، لأن الأكواد تستخدم مسارات مثل:

```cpp
"data/data.txt"
```

---

# سؤال مهم للطلاب

لماذا:

```cpp
file.seekp(6);
file << "C++";
```

لا يحوّل:

```text
Hello World
```

إلى:

```text
Hello C++World
```

الإجابة:
لأن `seekp()` لا يقوم بعملية Insert، بل يبدأ الكتابة فوق البيانات الموجودة من موقع المؤشر الحالي.
