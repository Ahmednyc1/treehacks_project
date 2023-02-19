import java.util.ArrayList;
import java.util.List;
import edu.princeton.cs.algs4.In;

public class Hospital {
    ArrayList<Patient> patients;
    ArrayList<Doctor> doctors;
    public Hospital(List ps, List docs) {
        if (!ps.isEmpty()) {
            patients.addAll(ps);
        }
        if (!docs.isEmpty()) {
            doctors.addAll(docs);
        }

        In in1 = new In("csvhacks.csv");


    }

    public void newDoctorAvailable(Doctor doc) {
        doctors.add(doc);
    }

    public void newPatient(Patient p) {
        patients.add(p);
    }

    public Doctor findDoc(Patient p) {
        for (Doctor d : doctors) {
            if (d.getLocation().equals(p.getLocation()) && d.getDoctorType().equals(p.getDoctorNeeded())) {

            }
        }
    }

}
