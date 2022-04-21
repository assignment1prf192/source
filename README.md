# source
/* GRADING MANAGEMENT SYSTEM
 * =========================
 *
 * In this assignment, your task is to write a console-based Grading Management System
 * (GMS, for short) using the C programming language.
 *
 * The main objective of this GMS is to allow user to easily manage student's grade
 * and related information. To make it clear for you, these information are listed below:
 *	1. Class Name
 *	2. Student ID
 *	3. Student Name
 *	4. Grades:
 *		+ Workshop
 *		+ Progress Test
 *		+ Assignment
 *		+ Practical Exam
 *		+ Final Exam 
 *	5. Final Result: This grade should be computed automatically using the below formula:
 *		Final Result = 0.1 * Workshop + 0.1 * Progress Test + 0.1 * Assignment + 
 *					   0.4 * Practical Exam + 0.3 * Final Exam
 *	6. Status (Passed / Failed). This information should be computed automatically.
 *		+ Status is "Passed" if and only if all below conditions are sastified:
 *			- Workshop, Progress Test, Assignment > 0
 *			- Final Exam >= 4
 *			- Final Result >= 5
 *		+ Otherwise, Status is "Failed"
 *
 * Your GMS should be able to validate the input data. For example,
 *	1. Student ID must be a string of length 8
 *	2. Student's grades must be in range [0, 10]
 *
 * Your GMS has to have at least seven functions:
 *	1. Add new a student's grade (as well as the related information mentioned above).
 *	2. Update a student's grade
 *	3. Delete a student's grade
 *	4. Calculate the average grade of a given class
 *	5. Calculate the average grade of a given student
 *	6. Find and list the grades of a given student in the tabular format
 *	    ------------------------------------------------------------------
 *	   |Class Name|Workshop|Progress Test|Practical Exam|Final Exam|Status|
 *	    ------------------------------------------------------------------
 *	   | SE123456 |   8.5  |    9.0      |      7.6     |   9.5    |Passed|
 *	    ------------------------------------------------------------------
 *	7. Find and list the grades of a given class in the tabular format
 *	    -------------------------------------------------------------------------------
 *	   |Student ID|Student Name|Workshop|Progress Test|Practical Exam|Final Exam|Status|
 *	    -------------------------------------------------------------------------------
 *	   | HE123456 |Le Van An   |   8.5  |    9.0      |      7.6     |   9.5    |Passed|
 *	    -------------------------------------------------------------------------------
 *
 * Your GMS has to permanently store student's grades in a text file on the secondary
 * storage.
 *
 * Working well with your classmates is one of the important parts of this course.
 * So, I encourage you to take time to get to know your classmates, form your group of
 * three members, and enjoy this assignment!
 */
