# Introduction
This project was created during my CS 231 Computer Programming 1 course. The objective of this project is to create a very simple calculator that 
will take a user's two integer inputs and a operator input, then do the simple operation to give the user the answer. 

# Methodology 
We start the program by using the <iostream> and <cmath> libraries. Then we use the std namespace, then start the main function. In this main function,
we use num1, num2, and ans as our int variables, then we use oper and restart as our char variables. Before we go into the while loop, we make sure that
restart is set to 'Y' so the loop will start. This loop is meant to make the calculator replayable. We start the loop by prompting the user to enter their 
operation that they would like to do. The first number typed will be num1, the operator character will be oper, and the second number typed will be num2.
There is a switch case here that will change what operation will take place depending on what character oper is. We do each calculation just like what the 
character means. The special case is division ('/'). We have to use an if else statement to make sure nothing is being divided by zero. If the user tries to 
divide by zero, an error message is given. After the answer is given to the user, they are prompted to enter 'Y' or 'N'. If the user enters 'Y', the loop will 
continue. If the user enters 'N', then the user will be given a goodbye message and the program will end. 

# Results
So far this program runs great, and I have not had any issues with certain operations. 

# Conclusion
Through this project, I learned that switch case is a very useful tool. Especially when I learned that you can use characters in switch case statements. 
I want to make this program able to take more complex operations, like multiple operations at once (Like 3+4*5). Hopefully through some testing, I can make 
that a reality.
