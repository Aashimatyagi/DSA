import os
import subprocess
from datetime import datetime, timedelta


folder_path = "C:/Users/AASHIMA/OneDrive/Desktop/DSA/DSA"

# Specify the path to the local git repository
repo_path = "C:/Users/AASHIMA/OneDrive/Desktop/DSA/DSA"

# Specify the GitHub repository URL
github_repo_url = "https://github.com/Aashimatyagi/DSA"

# Calculate the timestamp for midnight
now = datetime.now()
midnight = now.replace(hour=0, minute=0, second=0, microsecond=0) + timedelta(days=1)

# Calculate the remaining time until midnight
time_remaining = midnight - now

# Change directory to the local repository
os.chdir(repo_path)

# Commit and push changes to GitHub
subprocess.run(["git", "add", "."])
subprocess.run(["git", "commit", "-m", "day9"])
subprocess.run(["git", "push", "origin", "master"])

print("Changes pushed to GitHub.")

# Wait until midnight
print("Waiting for midnight...")
time.sleep(time_remaining.total_seconds())

# Repeat the process after midnight
while True:
    # Change directory to the folder
    os.chdir(folder_path)
    x=10
    day="day"+x
    # Pull changes from GitHub
    subprocess.run(["git", "pull", github_repo_url])

    print("Changes pulled from GitHub.")

    # Change directory to the local repository
    os.chdir(repo_path)

    # Commit and push changes to GitHub
    
    subprocess.run(["git", "add", "."])
    subprocess.run(["git", "commit", "-m", day])
    subprocess.run(["git", "push", "origin", "master"])

    print("Changes pushed to GitHub.")

    # Wait until the next midnight
    print("Waiting for next midnight...")
    x=x+1
    time.sleep(time_remaining.total_seconds())
