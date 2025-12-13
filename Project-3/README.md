# Project 3 – Procedural WebGL Shapes

## 1. Wireframe Triangle

File: [triangle_wireframe.html](triangle_wireframe.html)

This version renders a simple equilateral triangle using a procedural vertex shader.  
The vertex positions are computed using sine and cosine based on `gl_VertexID`, and the triangle is drawn as a wireframe using `gl.LINE_LOOP`.

## 2. Filled 10-Sided Polygon

File: [10_gon.html](10_gon.html)

This version renders a filled, convex 10-sided polygon using a `gl.TRIANGLE_FAN`.  
A uniform variable `N` controls the number of vertices, and vertex 0 is placed at the center of the fan.

## 3. Five-Pointed Star

File: [star.html](star.html)

This version modifies the polygon by alternating the radius of each outer vertex.  
Even-numbered vertices extend to the full radius, while odd-numbered vertices are pulled inward, producing a five-pointed star shape.

## 4. Rotating Star

File: [rotating_star.html](rotating_star.html)

This version animates the star by introducing a time uniform (`t`).  
The angle used to compute vertex positions is offset by `t`, causing the star to rotate smoothly over time.

## 5. Extra Credit: Rotating Star with Color

File: [color_rotating_star.html](color_rotating_star.html)

In this version, the vertex shader outputs the computed `radius` value to the fragment shader.  
The fragment shader uses this interpolated value to generate dynamic color gradients.
