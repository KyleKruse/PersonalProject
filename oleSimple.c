/*
char stringVersion = "I, II, III, IV, V, VI, VII, VIII, IX, X, XI, XII, XIII, XIV, XV, XVI, XVII, XVIII, XIX, XX, XXI, XXII, XXIII, XXIV, XXV, XXVI, XXVII, XXVIII, XXIX, XXX, XXXI, XXXII, XXXIII, XXXIV, XXXV, XXXVI, XXXVII, XXXVIII, XXXIX, XL, XLI, XLII, XLIII, XLIV, XLV, XLVI, XLVII, XLVIII, XLIX, L, LI, LII, LIII, LIV, LV, LVI, LVII, LVIII, LIX, LX, LXI, LXII, LXIII, LXIV, LXV, LXVI, LXVII, LXVIII, LXIX, LXX, LXXI, LXXII, LXXIII, LXXIV, LXXV, LXXVI, LXXVII, LXXVIII, LXXIX, LXXX, LXXXI, LXXXII, LXXXIII, LXXXIV, LXXXV, LXXXVI, LXXXVII, LXXXVIII, LXXXIX, XC, XCI, XCII, XCIII, XCIV, XCV, XCVI, XCVII, XCVIII, XCIX, C" 

char romans[10][10] = 0;

romans = 
{
    {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"}
    {"XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"}
    {"XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX", "XXX",}
    {"XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX", "XL"}
    {"XLI", "XLII", "XLIII", "XLIV", "XLV", "XLVI", "XLVII", "XLVIII", "XLIX", "L",}
    {"LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX"}
    {"LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX", "LXX"}
    {"LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX", "LXXX"}
    {"LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX", "XC"}
    {"XCI", "XCII", "XCIII", "XCIV", "XCV", "XCVI", "XCVII", "XCVIII", "XCIX", "C "}
};
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *romans[100] = {0};
    int i,spacer = 0;

    romans[0] = "I"; romans[1] = "II"; romans[2] = "III"; romans[3] = "IV"; romans[4] = "V"; romans[5] = "VI"; romans[6] = "VII"; romans[7] = "VIII"; romans[8] = "IX"; romans[9] = "X";
    romans[10] = "XI"; romans[11] = "XII"; romans[12] = "XIII"; romans[13] = "XIV"; romans[14] = "XV"; romans[15] = "XVI"; romans[16] = "XVII"; romans[17] = "XVIII"; romans[18] = "XIX"; romans[19] = "XX";
    romans[20] = "XXI"; romans[21] = "XXII"; romans[22] = "XXIII"; romans[23] = "XXIV"; romans[24] = "XXV"; romans[25] = "XXVI"; romans[26] = "XXVII"; romans[27] = "XXVIII"; romans[28] = "XXIX"; romans[29] = "XXX";
    romans[30] = "XXXI"; romans[31] = "XXXII"; romans[32] = "XXXIII"; romans[33] = "XXXIV"; romans[34] = "XXXV"; romans[35] = "XXXVI"; romans[36] = "XXXVII"; romans[37] = "XXXVIII"; romans[38] = "XXXIX"; romans[39] = "XL";
    romans[40] = "XLI"; romans[41] = "XLII"; romans[42] = "XLIII"; romans[43] = "XLIV"; romans[44] = "XLV"; romans[45] = "XLVI"; romans[46] = "XLVII"; romans[47] = "XLVIII"; romans[48] = "XLIX"; romans[49] = "L";
    romans[50] = "LI"; romans[51] = "LII"; romans[52] = "LIII"; romans[53] = "LIV"; romans[54] = "LV"; romans[55] = "LVI"; romans[56] = "LVII"; romans[57] = "LVIII"; romans[58] = "LIX"; romans[59] = "LX";
    romans[60] = "LXI"; romans[61] = "LXII"; romans[62] = "LXIII"; romans[63] = "LXIV"; romans[64] = "LXV"; romans[65] = "LXVI"; romans[66] = "LXVII"; romans[67] = "LXVIII"; romans[68] = "LXIX"; romans[69] = "LXX";
    romans[70] = "LXXI"; romans[71] = "LXXII"; romans[72] = "LXXIII"; romans[73] = "LXXIV"; romans[74] = "LXXV"; romans[75] = "LXXVI"; romans[76] = "LXXVII"; romans[77] = "LXXVIII"; romans[78] = "LXXIX"; romans[79] = "LXXX";
    romans[80] = "LXXXI"; romans[81] = "LXXXII"; romans[82] = "LXXXIII"; romans[83] = "LXXXIV"; romans[84] = "LXXXV"; romans[85] = "LXXXVI"; romans[86] = "LXXXVII"; romans[87] = "LXXXVIII"; romans[88] = "LXXXIX"; romans[89] = "XC";
    romans[90] = "XCI"; romans[91] = "XCII"; romans[92] = "XCIII"; romans[93] = "XCIV"; romans[94] = "XCV"; romans[95] = "XCVI"; romans[96] = "XCVII"; romans[97] = "XCVIII"; romans[98] = "XCIX"; romans[99] = "C";

    printf("Here's the numerals: \n");
    for (i = 0; i < 100; i++)
    {
        printf("%d = %s  ", (i+1), romans[i]);
        spacer++;
        if ((spacer % 10) == 0)
        {
            printf("\n");
            spacer = 0;
        }
    }
    printf("End! \n");

    return 0;
}