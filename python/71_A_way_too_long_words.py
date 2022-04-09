
def main():
    n = int(input())

    for i in range(n):
        string = input()
        if len(string) > 10:
            newstring = string[0] + str(len(string) - 2) + string[len(string) - 1]
            string = newstring
        print(string)

if __name__ == "__main__" :
    main()
