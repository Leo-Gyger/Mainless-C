# Mainless-C

## uses and explainations

The entire purpose of not having any main/replacing it with a macro is simple,
adding more modularity to your code, maybe it shall have a main only twice a day,
and with a macro you could check using some inline shell what the date is.
And then set a environmental variable that would allow the text macro to write a main.
More realistically it's very useful in case you want to do some kernel scripting,
or simply writes scripts in C that might or might not be called inside a bigger program.

## example

[See here an example of a code that doesn't have a main and yet it is compiled](https://github.com/lgyger/Mainless-C/edit/main/test.c)
You could add an ifndef to make sure that said main exist or is replaced only 
in specific cases for debugging for example. Or maybe a main that takes 4 types
of arguments.

Another possible way would be to use the 'start'  with an underscore in front.
Why does it work ? Simple in assembly start is the literal begining of the program,
therfore by adding it yourself you are simply removing the middle man that is
the main function.
