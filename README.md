# ALGORITHM:

Function lengthOfLastWord:

Input: a string s.
Output: an integer representing the length of the last word in the string.

Variable Initialization:
Initialize length to 0 (to store the length of the last word).
Initialize counting to false (to track if counting characters of the last word).

Loop Through String in Reverse:
Iterate through the characters of the string s starting from the end.

If the current character is not a space:
Set counting to true.
Increment the length.

If the current character is a space and counting has started:
Break out of the loop (since we've counted the last word).

Return Length:
Return the calculated length.

Function main:

Input: None.
Output: None.

Variable Declaration:
Declare a string s to store the input string.

User Input:
Prompt the user to enter a string using cout.
Read the input string using getline to handle spaces.

Call lengthOfLastWord Function:
Call the lengthOfLastWord function with the input string s.
Store the result in the variable result.

Output Result:
Display the result using cout.

# LOGIC:

Function lengthOfLastWord:
Initialize length to 0 to store the length of the last word.
Initialize counting to false to track if counting characters of the last word.

Loop Through String in Reverse:
Start iterating through the characters of the string s from the end (last character) to the beginning.
If the current character is not a space:
Set counting to true.
Increment the length to count the characters of the last word.

If the current character is a space and counting has started:
Break out of the loop since we have counted the last word.

Return Length:
Return the calculated length as the result.

Function main:
Declare a string s to store the user input.
Prompt the user to enter a string using cout.
Read the input string using getline to handle spaces.
Call the lengthOfLastWord function with the input string s to get the length of the last word.
Display the result using cout.