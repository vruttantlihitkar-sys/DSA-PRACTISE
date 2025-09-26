# This will delete the variable named 'print' if it exists, restoring the built-in print function.
if 'print' in locals() or 'print' in globals():
    del print