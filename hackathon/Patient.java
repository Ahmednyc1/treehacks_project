public class Patient {
    private String name;
    private String healthCare;
    private String doctorNeeded;
    private String location;

    public Patient(String n, String hc, String dn, String l) {
        name = n;
        healthCare = hc;
        doctorNeeded = dn;
        location = l;
    }

    public String getName() {
        return name;
    }

    public String healthCare() {
        return healthCare;
    }

    public String getDoctorNeeded() {
        return doctorNeeded;
    }

    public String getLocation() {
        return location;
    }
}
