For my algorithm, I bounded my x, y, and z values to small ranges that were conistent when the accelerometer was upside down and when it was rightside up, and if my axis values were not consistent in
these ranges, I considered the gesture to be shaking. For both upside down and rightside up gestures, my x and y amplitudes were both restricted to a consistent average, while my z axis amplitude was
restricted to a higher amplitude average if rightside up, and a lower amplitude average if upside down, differentiating the two gestures. If the accelerometer did not simultaneously fall within the 
given ranges, the gesture was labeled as shaking. Since we were only given 3 different gestures to work between, it was hard to differentiate the shaking gesture from minor movements or the accelrator
resting in positions other than the up or down gestures. So tapping the accelerometer will result in the shaking gesture, as well as resting in the x or y axis.
