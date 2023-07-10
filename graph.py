# Add a vertex to the dictionary
def add_vertex(v):
    global graph
    global vertices_no
    if v in graph:
        print("Vertex", v, "already exists.")
    else:
        vertices_no = vertices_no + 1
        graph[v] = []

# Add an edge between vertex v1 and vertex v2 with edge weight e


def add_edge(v1, v2, e):
    global graph
    # Check if v1 and v2 are in the graph
    if v1 not in graph:
        print("Vertex", v1, "does not exist.")
    elif v2 not in graph:
        print("Vertex", v2, "does not exist.")
    else:
        temp = [v2, e]
        graph[v1].append(temp)

# Print the graph


def print_graph():
    global graph
    for vertex in graph:
        for edges in graph[vertex]:
            print(vertex, "->", edges[0], "edge weight:", edges[1])


# driver code
graph = {}
# stores the number of vertices in the graph
vertices_no = 0
add_vertex(1)
add_vertex(2)
add_vertex(3)
add_vertex(4)
# Add the edges between the vertices by specifying
# the from and to vertex along with the edge weights.
add_edge(1, 2, 1)
add_edge(1, 3, 1)
add_edge(2, 3, 3)
add_edge(3, 4, 4)
add_edge(4, 1, 5)
print_graph()
# Reminder: the second element of each list inside the dictionary
# denotes the edge weight.
print("Internal representation: ", graph)
