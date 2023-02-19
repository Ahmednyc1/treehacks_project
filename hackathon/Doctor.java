public class Doctor {
    private String name;
    private String healthCare;
    private String doctorType;
    private String location;

    public Doctor(String n, String hc, String dn, String l) {
        name = n;
        healthCare = hc;
        doctorType = dn;
        location = l;
    }

    public String getName() {
        return name;
    }

    public String healthCare() {
        return healthCare;
    }

    public String getDoctorType() {
        return doctorType;
    }

    public String getLocation() {
        return location;
    }

}
