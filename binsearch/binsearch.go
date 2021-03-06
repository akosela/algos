package main

import (
	"fmt"
)

func bin_search(s []int, item int) int {
	low := 0
	high := len(s) - 1

	for low <= high {
		mid := (low + high) / 2
		guess := s[mid]
		if guess == item {
			return mid
		}
		if guess > item {
			high = mid - 1
		} else {
			low = mid + 1
		}
	}
	return -1
}

func main() {
	s := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	fmt.Println(s)
	fmt.Println(s[bin_search(s, 2)])
}
