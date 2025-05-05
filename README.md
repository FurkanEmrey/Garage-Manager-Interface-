
# Car Garage Management System

A console-based application to manage car registrations in a garage. Allows users to register, delete, list, update car information, and exit the system.

## Features

- **Register New Cars**: Add cars with details (brand, model, cost, year, license plate)
- **Delete Cars**: Remove cars by license plate
- **List All Cars**: Display all registered cars with full details
- **Update Information**: Modify existing car details using license plate
- **Exit System**: Cleanly exit the application

## Installation

1. Ensure you have a C++ compiler installed
2. Clone repository/download `main.cpp`
3. Compile using:
   ```bash
   g++ main.cpp -o CarGarage
   ```
4. Run executable:
   ```bash
   ./CarGarage
   ```

## Usage

1. **Register a Car (Option 1)**
   - Enter brand, model, cost, year, license plate
   - Automatic confirmation on success

2. **Delete a Car (Option 2)**
   - Input license plate of car to remove
   - Success message or error if not found

3. **List Cars (Option 3)**
   - View all registered cars in formatted display
   - Shows brand, model, cost, year, license plate

4. **Update Information (Option 4)**
   - Enter license plate to find car
   - Update all fields except plate
   - Confirmation message on success

5. **Exit (Option 5)**
   - Cleanly terminates application

## Code Structure

- **Car Class**:  
  - Private: `carTag` (license plate)
  - Public: brand, model, cost, year
  - Getter/Setter for license plate
  - `list()` method displays car details

- **Functions**:
  - `regCar()`: Adds new car to array
  - `delCar()`: Removes car by plate
  - `carUpdateInfo()`: Modifies car data
  - Main loop handles menu interactions

## Limitations & Improvements

- Stores data in memory (array) - loses data on exit
- Fixed maximum capacity (100 cars)
- No input validation for numeric fields
- Possible enhancements:
  - Use file storage for persistence
  - Implement dynamic data structures (vectors)
  - Add search functionality
  - Include input validation
  - Add price formatting
  - Implement UUIDs for unique identification

## License

MIT License - Free for modification and distribution
```