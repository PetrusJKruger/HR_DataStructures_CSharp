/* *********** Details ***********
    Date: 20 Mar 2020
    Source: https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
    Key Lesson:
      
      * Use of List<int>
      * Intialize with new List<int> or Console.ReadLine().TrimEnd().Split(' ').ToList().Select(aTemp => Convert.ToInt32(aTemp)).ToList();
      
   ******************************* */

 /* add code where appropriate */

    // Complete the compareTriplets function below.
    static List<int> compareTriplets(List<int> a, List<int> b) {
        int aScore = 0;
        int bScore = 0;

        for (int i = 0; i < 3; i++)
        {
            if (a[i] > b[i])
            {
                aScore++;
            }
            else
            {
                if (a[i] < b[i])
                {
                    bScore++;
                }
            }
        }

        List<int> scores = new List<int>{aScore,bScore};
        return scores;

    }
