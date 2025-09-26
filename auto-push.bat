cd /v/git-dsa  # Go to your repo folder

# Remove Git index (cached metadata)
rm -f .git/index

# Reset Git to rebuild index safely
git reset

# Stage all files
git add -A

# Get current date and time in Windows Git Bash format
datetime=$(date +"%Y-%m-%d_%H-%M-%S")

# Commit with dynamic date-time
git commit -m "Files uploaded from Vruttant's PC on $datetime"

# Force push
git push -f origin main
