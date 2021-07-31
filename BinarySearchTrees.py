class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def search(self, target):
        if self.data == target:
            print("There is the number from the tree")
            return self
        if self.left and self.data > target:
            return self.left.search(target)

        if self.right and self.data < target:
            return self.right.search(target)

        print("The value is not in the tree")

    def traverse_preorder(self):
        print(self.data)
        if self.left:
            self.left.traverse_preorder()

        if self.right:
            self.right.traverse_preorder()

    def traverse_inorder(self):
        if self.left:
            self.left.traverse_inorder()
        print(self.data)
        if self.right:
            self.right.traverse_inorder()

    def traverse_postorder(self):
        if self.left:
            self.left.traverse_postorder()

        if self.right:
            self.right.traverse_postorder()
        print(self.data)

    def height(self, h=0):
        left_height = self.left.height(h+1) if self.left else h
        right_height = self.right.height(h+1) if self.right else h
        return max(left_height, right_height)

    def get_node_at_depth(self, depth, nodes=[]):
        if depth == 0:
            nodes.append(self.data)
            return nodes

        if self.left:
            self.left.get_node_at_depth(depth-1, nodes)
        else:
            nodes.extend([None]*2**(depth-1))

        if self.right:
            self.right.get_node_at_depth(depth-1, nodes)
        else:
            nodes.extend([None]*2**(depth-1))
        return nodes


class Tree:
    def __init__(self, root, name=''):
        self.root = root
        self.name = name

    def search(self, target):
        return self.root.search(target)

    def traverse_preorder(self):
        return self.root.traverse_preorder()

    def traverse_inorder(self):
        return self.root.traverse_inorder()

    def traverse_postorder(self):
        return self.root.traverse_postorder()

    def height(self):
        return self.root.height()

    def get_node_at_depth(self, depth):
        return self.root.get_node_at_depth(depth)

    def print(self, label=''):
        print(f"{self.name} {label}")
        height = self.root.height
        spacing = 3
        width = int((2**height-1) * (spacing+1) + 1)
        # Root Offset
        offset = int((width-1)/2)
        for depth in range(0, height+1):
            if depth > 0:
                # print directional lines
                print(f" {offset+1} ")


# tree = Tree(Node(10), 'Tree Traversals')
#
# tree.root.left = Node(5)
# tree.root.right = Node(15)
#
# tree.root.left.left = Node(3)
# tree.root.left.right = Node(8)
#
# tree.root.right.left = Node(13)
# tree.root.right.right = Node(20)
#
# tree.root.left.right.left = Node(30)
# tree.root.left.right.right = Node(43)
# tree.root.left.left.left = Node(2)
# tree.root.left.left.right = Node(4)


# Printing the elements in the tree
"""myTree = Tree(tree, 'My Tree')
print("Tree name: " + myTree.name)
print("Min number in tree:" + str(myTree.root.left.left.data))
print("Max number in tree:" + str(myTree.root.right.right.data))"""

'''''''''''''''' Traverse Trees o/p code '''''''''''''''''
# Searching for a specific element in the tree
"""found = myTree.search(1)
if found:
    print(found.data)
else:
    pass"""

"""print(f"Traverse Pre-Order Tree")
tree.traverse_preorder()
print(f"Traverse In-Order Tree")
tree.traverse_inorder()
print(f"Traverse Post-Order Tree")
tree.traverse_postorder()"""
''''''''''''''''' Traverse Trees o/p code '''''''''''''''''

''''''''''''''''''' Finding the height code '''''''''''''''''''
# tree = Tree(Node(50), 'A very tall tree')
#
# tree.root.left = Node(25)
# tree.root.right = Node(75)
#
# tree.root.left.left = Node(10)
# tree.root.left.right = Node(35)
#
# tree.root.right.left = Node(30)
# tree.root.right.right = Node(42)
#
# tree.root.left.left.left = Node(5)
# tree.root.left.left.right = Node(13)
# tree.root.left.left.left.left = Node(2)
#
# print(tree.root.height())
#
# tree = Tree(Node(50), 'A very short tree')
# print(tree.root.height())
''''''''''''''''''' Finding the height code '''''''''''''''''''

''''''''''''''''''' Getting the nodes at a depth '''''''''''''''''''
tree = Tree(Node(50), "Get nodes at a depth")
tree.root.left = Node(25)
tree.root.right = Node(75)

tree.root.left.left = Node(13)
tree.root.left.right = Node(35)

tree.root.right.left = Node(55)
tree.root.right.right = Node(103)

tree.root.left.left.right = Node(37)
tree.root.right.right.right = Node(256)
tree.root.left.left.right = Node(20)

print(tree.get_node_at_depth())

''''''''''''''''''' Getting the nodes at a depth '''''''''''''''''''

''''''''''''''''' Printing the whole tree '''''''''''''''''

''''''''''''''''' Printing the whole tree '''''''''''''''''
