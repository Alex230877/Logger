Написать класс Logger, через который будет проходить вся работа с файлом логов. 

Сохраняйте сообщения в файл на диске, можете назвать его log.txt. 

При создании объекта логгера должно производиться открытие файла, а при его разрушении — закрытие файла (концепт RAII).

В классе реализованы методы:

запись строки логов в файл, метод writeLog (сообщений из вектора messages);
чтение строки с конкретным номером из файла, метод readLog (количество строк и их номер можно менять);
вывод в консоль записанных в файл строк, метод writer;
вывод в консоль прочитанных из файла строк, метод reader.

Запись и чтение являются потокобезопасными за счет использования std::shared_mutex и std::mutex — при одновременном вызове нескольких потоков с записью в файл и чтением из файла, не происходит взаимоблокировок и гонок данных.
