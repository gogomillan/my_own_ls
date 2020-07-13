# My_own_ls project
This project allows to understand the basis for the construnction of a "ls" Unix
like command.

## Concepts
These three functions are used to manipulate directory streams.

Manuals:
* opendir (man 3 opendir)
* readdir (man 3 readdir)
* closedir (man 3 closedir)


## Tasks

### Manipulating directories
Write a program that takes the name of a directory as a parameter and prints its
content (names of files / folders inside the directory).  

What happens if you pass the name of a folder that does not exist? 

Dont forget to check the return values of the above functions. 

**Example:**
```bash wrap
/simple_ls/concept$ gcc -Wall -Wextra -Werror -pedantic main.c 
/simple_ls/concept$ ls test/ -1a
.
..
file
File2
file3
folder1
Folder2
folder3
/simple_ls/concept$ ./a.out test/
file
..
file3
folder1
Folder2
.
File2
folder3
/simple_ls/concept$ 
```
