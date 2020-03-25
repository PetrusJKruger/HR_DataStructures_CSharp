/* **************** Details *************** 
  Date: 20 March 2020
  Source: https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
   **************************************** */
 /* add code where appropriate */
    static int simpleArraySum(int[] ar) {
        /*
         * Write your code here.
         */
         int tmpSum=0;
         foreach(int a in ar) 
         {
             tmpSum = tmpSum + a;
         }
         return tmpSum;

    }


