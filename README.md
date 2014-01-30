Simple Spark Core Controller
============================

A customize-able simple Spark Core web app controller.

###Run The Example First!###

1. Edit the index.html file and enter your ``coreID`` and ``accessToken`` in the user editable data area.

2. Create a new app on https://www.spark.io/build and call it "SparkController".  Copy/Paste the contents of the SparkController.cpp file over your new app.  Save it and Flash it to your Core.

3. Open the index.html in your browser or upload all files to your website at a secret URL and start controlling your Spark Core!

NOTES: Every time you press Button 1, notice the onboard blue LED tied to output D7 toggles on or off.

###Customize it!###

1. Enter a ``funcKey``, ``args`` (if desired) and button ``label`` for each function you want to control. [Learn about how Functions work here.](http://docs.spark.io/#/firmware/cloud-spark-function)

2. Any button label that is defined such as ``label4 = "";``, will automatically hide that button.

3. Name your app with the ``appHeading`` variable.

4. Edit your sketch with corresponding ``funcKeys`` and whatever control and logic you can dream up for your project.

NOTES: You will see the "SUCCESS!" message pop up every time you press a button.  It will say success on button presses only if it actually gets a return value of 200 from your function. If you Core goes offline and you press a button, you'll see an ERROR! Timed Out message.  This success/error message popup could easily change to something else in the future.  Study the working example before you start editing it to your liking!"

Need Variables as well? Check out this example: https://github.com/technobly/Remote-Spark

Credits: This code is a hacked up version of code from http://www.github.com/jflasher/spark-helper thanks!

![iPhone5s](http://i.imgur.com/3aFPgjV.png)
