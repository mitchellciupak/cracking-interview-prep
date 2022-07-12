// integers.go
package main

import (
	"fmt"

	"rsc.io/quote"
)

func main() {
	fmt.Println(quote.Go())
}

// testing 
package morestrings

import "testing"

func TestReverseRunes(t *testing.T) {
    cases := []struct {
        in, want string
    }{
        {"Hello, world", "dlrow ,olleH"},
        {"Hello, 世界", "界世 ,olleH"},
        {"", ""},
    }
    for _, c := range cases {
        got := ReverseRunes(c.in)
        if got != c.want {
            t.Errorf("ReverseRunes(%q) == %q, want %q", c.in, got, c.want)
        }
    }
}

// https://go.dev/doc/
// [x] https://go.dev/doc/tutorial/getting-started
// [x] https://go.dev/doc/tutorial/create-module
// [x] https://go.dev/doc/code
// [ ] https://go.dev/tour/welcome/1