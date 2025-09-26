@echo off
cd /d V:\git-dsa

:: Stage all changes
git add -A

:: Commit with custom message including date and time
set dt=%date%_%time:~0,2%-%time:~3,2%-%time:~6,2%
git commit -m "Files uploaded from Vruttant's PC on %dt%"

:: Pull remote changes (rebase) to avoid conflicts
git pull origin main --rebase

:: Push to GitHub
git push origin main
