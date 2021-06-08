class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        res=[]
        for i in matrix:
            for j in i:
                res.append(j)
        if target in res:
            return True
        return False
