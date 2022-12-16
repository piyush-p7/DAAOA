def insertionSort(list):
    for i in range(1, len(list)):
        key = list[i];
        j = i - 1
        while j >=0 and key < list[j]:
            list[j+1] = list[j]
            j -= 1
        list[j+1] = key

arr = [2,4,5,6,5,4,1,6,7,8,9]
insertionSort(arr)
print("The Sorted Array is: ",arr)