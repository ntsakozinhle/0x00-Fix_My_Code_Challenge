#!/usr/bin/python3
""" This moduled describes square class """


class square():
    """ A class representing a square """
    
    def __init__(self, width=0, height=0):
        """
        Initializes the square with given width and height.

        Args:
            width (int): The width of the square.
            height (int): the height of the square.
        """
        self.width = width
        self.height = height

    def area(self):
        """ Area of the square """
        return self.width * self.width

    def permiter(self):
        """ Perimeter of the square """
        return 2 * (self.width + self.height)

    def __str__(self):
        """ Returns a string representation of the Square """
        return "Square with width {} and height {}".format(self.width, self.height)

if __name__ == "__main__":

    s = square(width=12, height=9)
    print(s)
    print("Area:", s.area())
    print("Perimeter:", s.perimeter())
