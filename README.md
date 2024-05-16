# BPA-Nationals-2024
C++
Top-Ten Finalist Unedited

Rectangular Encryption:

Tested input: The way to get started is to stop talking and start doing.

Output: toroldohgtsksieeetitnwtdonagasipgr#ytstat#tatand#

NOTE: It was later brought to my attention that the output may have been expected with spaces after every column as-
toroldo hgtsksi eeetitn wtdonag asipgr# ytstat# tatand#

1. Accept an inputted string from the terminal.
2. Use a created normalizeText function that returns the string with only lowercase letters and no punctuation.
3. Use a created encodeMessage function that rectangularly encrypted string.
    -Create a grid where the number of columns is only 0 or 1 more than the number of rows while containing all letters in inputed string.
        -(Used the sqrt() function on string.length())
    -Place each char in grid from left-to-right, top-to-bottom, if out of letters, insert '#'.
    -Create and return encrypted string by reading top-to-bottom, then left-to-right.
4. Print the encrypted string.
5. Make sure to implement code for error handling.
6. Comment for each function and as needed. (From what I've seen, thorough commenters take the gold in BPA)

This code wasn't perfect in many ways, I may post a revised version in the future.