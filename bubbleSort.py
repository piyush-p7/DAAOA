def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

arr = [2,4,5,6,5,4,1,6,7,8,9]
bubbleSort(arr)
print("The Sorted Array is: ",arr)