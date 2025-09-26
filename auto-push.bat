cd /v/git-dsa  # Go to your repo folder

# 1. Remove Git index (cached metadata)
rm -f .git/index

# 2. Reset Git to rebuild index safely
git reset

# 3. Stage all files (new, modified, deleted)
git add -A

# 4. Commit all changes with dynamic date and time
git commit -m "Files uploaded from Vruttant's PC on $(date '+%Y-%m-%d_%H:%M:%S')"

# 5. Force push to GitHub
git push -f origin main
