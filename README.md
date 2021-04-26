# Database-of-students
English

In this work, I implemented the possibility of interacting with the MySQL database, which contains information about students of various groups. Namely, a mechanism for viewing and updating(adding and removing) students was developed.

Detailed review of the application.
In the main window of the form, you can select the faculty that interests us (that is, we are going to view the list of students, add or remove students), and also, by clicking on the corresponding button, you can view the list of students from all faculties of the institute.
* In all windows, student lists are sorted alphabetically

After selecting the faculty we are interested in, we can mark a certain group, as a result of which a component with a list of students in the group will be displayed. In each group, you can add or remove a student from the list. This mechanism is implemented in more detail in the screenshots in the Images folder.

The software implementation for all form-faculties is identical. The changes are only related to database requests. The final database schema is also located in the Images folder.

Russian

В данной работе мной была реализована возможность взаимодействовия с базой данных MySql, которая содержит в себе информацию о студентах различных групп. А именно был разработан механизм просматривания и модернизации(добавления и удаления) студентов. 

Детальное рассмотрение работы приложения.
В главном окне формы можно выбрать факультет, который нас интересует (то есть собираемся просматривать список студентов, добавлять или удалять студентов), а также, по нажатию на соответствующую кнопку, есть возможность посмотреть список студентов со всех факультетов института.
* Во всех окнах списки студентов сортируются по алфавиту

Выбрав интересующий нас факультет, мы можем отметить определённую группу, в результате чего отобразится компонент со списком студентов в группе. В каждой группе можно добавлять или удалять студента из списка. Более подробно этот механизм реализован на скриншотах в папке Images.   

Программная реализация для всех форм-факультетов идентична. Изменения связаны только с запросами к БД. Итоговая схема БД также находится в папке Images.
