Let’s go through each recursive call of nSum(5) step-by-step:

// nSum(5):

// Calculates 5 + nSum(4)
// nSum(4):

// Calculates 4 + nSum(3)
// nSum(3):

// Calculates 3 + nSum(2)
// nSum(2):

// Calculates 2 + nSum(1)
// nSum(1):

// Calculates 1 + nSum(0)
// nSum(0) (Base case):

// Returns 0
// Now, each call returns its result up the chain:

// nSum(1) returns 1 + 0 = 1
// nSum(2) returns 2 + 1 = 3
// nSum(3) returns 3 + 3 = 6
// nSum(4) returns 4 + 6 = 10
// nSum(5) returns 5 + 10 = 15