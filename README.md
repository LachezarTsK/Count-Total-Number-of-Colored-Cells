# Count-Total-Number-of-Colored-Cells
Challenge at LeetCode.com. Tags: Math.

This solution, if it is in the form presented here, is identical for any programming language (as far as I know it), except some casting if needed for the specific language:

1 + 2 * n * (n - 1)

'2 * n * (n - 1)' in the expression is the result of cancelling out the equal parts in the numerator and the denominator of the formula for a sum of arithmetic progression with first member '0' and a step of increase '4'.
    
If 'n' is the designation for the total number of members in the arithmetic progression, then:

n*(2*firstMember +(n-1)*stepOfIncrease)/2

and after replacing the values for 'firstMember' and 'stepOfIncrease':

n*(2*0 +(n-1)*4)/2

and cancelling out, the result is:

2 * n * (n - 1)
