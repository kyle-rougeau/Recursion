.RECIPEPREFIX = >
objects = main.o

lab06 : $(objects)
> g++ -o lab06 $(objects)
   
clean :
> rm $(objects)
