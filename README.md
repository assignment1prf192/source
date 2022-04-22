# Tutorial

T đã up code gốc, format khung của chương trình và một source grading system viết trong ngôn ngữ C/CPP (example.cpp) để anh em trích xuất code, tham khảo thuật toán. Mỗi người sẽ phụ trách 1 phần trong bài.

Yêu cầu của thầy rằng bài Assignment của mình sẽ có ít nhất 7 chức năng, và mỗi người đều phải hiểu được ý nghĩa, cách thức chương trình hoạt động ( ANH EM NHỚ PHẢI HỌC ĐẤY NHÉ, ĐỪNG CHỈ CHÉP CODE )

7 chức năng thiết yếu của phần mềm ( bắt buộc phải có )

Phân công nhiệm vụ: 

* Dương - Add new student grade, Update student grade, Delete student grade, Lưu dữ liệu student ra 1 file ( đọc lưu ý 1 )
* Hải - Calculate the average grade of a given class, Calculate the average grade of a given student
* Bình - Find and list the grades of a given student in the tabular format, Find and list the grades of a given class in the tabular format

Hôm review anh em sẽ thuyết trình và phải hiểu về kiến thức của phần mềm anh em viết, hiểu cách nó hoạt động, nếu có sai sót thì anh em tự sửa và trao đổi với nhau.

Deadline: 27/04/2022 - Anh em cố làm xong sớm trước 1-2 ngày để còn test, debug, chuẩn bị review các kiểu lặt vặt.

Your GMS has to have at least seven functions:
- Add new a student's grade (as well as the related information mentioned above).
- Update a student's grade
- Delete a student's grade
- Calculate the average grade of a given class
- Calculate the average grade of a given student
- Find and list the grades of a given student in the tabular format
 ------------------------------------------------------------------
|Class Name|Workshop|Progress Test|Practical Exam|Final Exam|Status|
 ------------------------------------------------------------------
| SE123456 |   8.5  |    9.0      |      7.6     |   9.5    |Passed|
 ------------------------------------------------------------------
- Find and list the grades of a given class in the tabular format
 -------------------------------------------------------------------------------
|Student ID|Student Name|Workshop|Progress Test|Practical Exam|Final Exam|Status|
 -------------------------------------------------------------------------------
| HE123456 |Le Van An   |   8.5  |    9.0      |      7.6     |   9.5    |Passed|
 -------------------------------------------------------------------------------

// Lưu ý 1: Your GMS has to permanently store student's grades in a text file on the secondary
storage.

// Lưu ý 2: Chương trình phải xác thực dữ liệu đầu vào 
Your GMS should be able to validate the input data:
- Student ID must be a string of length 8 - Mã số sinh viên phải là chuỗi string gồm 8 ký tự
- Student's grades must be in range [0, 10] - Điểm của học sinh nhập vào phải từ 0 -> 10
