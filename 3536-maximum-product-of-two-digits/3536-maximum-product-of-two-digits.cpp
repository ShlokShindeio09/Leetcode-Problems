class Solution {
public:
    int maxProduct(int n) {
        
        int largest = 0;
        int seclargest = 0;


        while(n>0)
        {
            int digit = n%10;
            n = n/10;

            if(digit>largest)
            {
                seclargest = largest;
                largest = digit;
            }
            else if(digit > seclargest)
            {
                seclargest = digit;
            }

        }
        return largest*seclargest;

    }
};