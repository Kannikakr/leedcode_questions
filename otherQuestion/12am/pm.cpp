/*Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in 12 hour format
Returns

string: the time in 24 hour format

*/

string timeConversion(string s) {
    string hour = s.substr(0, 2);
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string period = s.substr(8, 2);
    int hourInt = stoi(hour); 

    if (period == "PM" && hourInt != 12) {
        hourInt += 12; 
    } else if (period == "AM" && hourInt == 12) {
        hourInt = 0; 
    }

    hour = (hourInt < 10 ? "0" : "") + to_string(hourInt);
      
    return hour + ":" + minutes + ":" + seconds;
}

/*
Explanation 

Extract Components:

The function uses substr to extract the components of the time string:
hour: The first two characters (hh).
minutes: Characters at positions 3 and 4 (mm).
seconds: Characters at positions 6 and 7 (ss).
period: The last two characters (AM or PM).
Convert Hour to Integer:

The stoi function is used to convert the hour string to an integer (hourInt).
Adjust Hour for 24-Hour Format:

If the period is PM and the hour is not 12, add 12 to the hour (e.g., 01:00 PM becomes 13:00).
If the period is AM and the hour is 12, set the hour to 0 (e.g., 12:00 AM becomes 00:00).
Otherwise, leave the hour unchanged.
Format Hour as Two Digits:

If the adjusted hour is less than 10, prepend a 0 to ensure the hour is always two digits.
Return the Result:

Concatenate the formatted hour with the minutes and seconds, separated by colons (:).

*/