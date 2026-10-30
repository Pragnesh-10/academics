
def job_scheduling(jobs):
    # Sort jobs by descending profit
    jobs.sort(key=lambda x: x[2], reverse=True)

    # Find the maximum deadline
    max_deadline = max(job[1] for job in jobs)

    # Create empty time slots
    slots = [None] * max_deadline
    total_profit = 0

    # Schedule each job
    for job_id, deadline, profit in jobs:
        # Find the latest available slot
        for j in range(min(deadline, max_deadline) - 1, -1, -1):
            if slots[j] is None:
                slots[j] = job_id
                total_profit += profit
                break

    # Display the result
    print("Scheduled Jobs:", end=" ")
    for job in slots:
        if job is not None:
            print(job, end=" ")

    print("\nMaximum Profit:", total_profit)


# Main program
n = int(input("Enter the number of jobs: "))
jobs = []

for i in range(n):
    job_id = input(f"Enter job ID for job {i + 1}: ")
    deadline = int(input(f"Enter deadline for job {i + 1}: "))
    profit = int(input(f"Enter profit for job {i + 1}: "))
    jobs.append((job_id, deadline, profit))

job_scheduling(jobs)
