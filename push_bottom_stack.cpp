class Solution

{

    //Function to find the next greater element for each element of the array.

    public static long[] nextLargerElement(long[] arr, int n)

    { 

        HashMap<Integer,Long> map = new HashMap<>();

        long[] ans= new long[n];

        Stack<Integer> stk = new Stack<>();

        

        for(int i = 0 ; i< n ; i++)

            map.put(i,arr[i]);

        

        for(int i = 0 ; i< n ; i++)

        {

            if(stk.empty() || map.get(stk.peek()) >= arr[i])

            {

                stk.push(i);

            }

            else

            {

                while(!stk.empty() && map.get(stk.peek()) < arr[i])

                {

                    int index = stk.peek();

                    ans[index] = arr[i];

                    stk.pop();

                }

                stk.push(i);

            }

        }

        

        while(!stk.empty())

        {

            int index = stk.peek();

            ans[index] = -1;

            stk.pop();

        }

        

        return ans;

        

    } 

}