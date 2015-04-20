int removeElement(int A[], int n, int elem) 
{
    int res = n;
    for (int i = 0; i < n; i++)
	{
        if (A[i] == elem)
            res--;
    }
    return res;    
}
