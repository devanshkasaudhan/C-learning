string timeConversion(string s) {
    char ampm= s[9];
    int hours12= s[0]*10 + s[1];
    int min = s[3]*10 + s[4]; 
    int sec = s[6]*10 + s[7];
    if (ampm=='A') {
        if (hours12==12) {
        hours12=00
        }
        int hours24= hours12;
        
    } 
}
