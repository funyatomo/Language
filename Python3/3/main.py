#!/usr/bin/python3

import sys
args = sys.argv


def main(code, name):
    """
    docstring
    Here's an explanation.
    """
    print(code,name)

    # Comment out
    # Care about indent


    # pass do nothing
    pass

if __name__ == "__main__":
    args = sys.argv

    if len(args) == 3:
        code = args[1]
        name = args[2]
        main(code, name)  #Comment out

    else:
        print('$ sample.py <code> <name>')
